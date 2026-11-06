# Lost in Shadow (SDWE18 Rev 1, Wii disc, NTSC-U) - native recomp notes

Same recompiler and runtime as Zack & Wiki, TARGET: Terror and Geometry Wars: Galaxies.

## Source
- main.dol sha1 b4ab43bc52c5297777bad0e0b2ec1b0891c2b5d2, entry 0x80004050; RVL SDK Dec 11 2009 (IOS56),
  NW4R (Apr/Jun 2009), THP. Disc images come as .wbfs too: `tools/prepare_disc.py` and the runtime's disc setup
  read single-disc WBFS files (block table after the disc header copy in HD sector 1).
- 34 REL modules in files/dll (Hudson "objdll": one overlay DLL per scene, all module id 1, imports only from
  themselves and main.dol). Copy them to `rels/` before running `src/recomp.py`.

## Naming
- dtk: 10,557 functions. xmatch vs Zack & Wiki, TARGET: Terror, Geometry Wars, Chocobo's Dungeon, My Life as a Dark
  Lord and Gradius ReBirth (closest SDK): ~1,840 named. `tools/manual_names.txt` adds OSLink internals, KPAD/WPAD
  entries the matcher missed and the HuPrc functions. `tools/strref.py` (functions that build a string's address)
  and `tools/calls.py` (callees of a function) helped find them.

## REL modules (src/relgen.py, runtime/rel_rt.cpp)
- Each module's code section is recompiled at a fixed virtual address 0xC0000000 + k * 0x100000 (functions
  f_C0xxxxxx). Function starts: prolog/epilog, internal `bl` targets, code addresses formed with HA/LO relocations,
  and data pointers into code (runs of them inside one function with a `bctr` are jump tables instead).
- REL24 relocations (calls into main.dol) become direct calls. ADDR16_HA/LO against main.dol are constants; against
  the module's own sections they become `g_relsec[k][section] + addend`, the section addresses the game's own OSLink
  assigned (OSLink's static `Link` is wrapped: after it runs, the module is identified by its section sizes and
  its section table is copied into g_relsec; OSUnlink clears it). Jump tables switch on `ctr - g_relsec[k][1] + vbase`.
- dispatch() maps an address inside a linked module's code back to its virtual address (callbacks, vtables).
- REL functions are split at every known entry; a piece that runs off its end calls the next piece.

## HuPrc processes (runtime/coroutine.cpp)
- Hudson's process manager (as in Mario Party) runs each process on its own guest stack and switches with a private
  setjmp/longjmp pair (gcsetjmp 0x8000DBB0 / gclongjmp 0x8000DC30). HuPrcCall setjmps the scheduler and longjmps
  into a process; HuPrcVSleep/HuPrcSleep setjmp the process and longjmp back; HuPrcCreate sets a buffer's LR/SP to
  the process function and stack; HuPrcEnd longjmps to the scheduler with 2.
- Each guest execution chain gets a host fiber (ucontext / Windows fibers, 1 MB stack). Every recompiled call to
  gcsetjmp is wrapped in a host `__builtin_setjmp`; the functions containing one get frame ids so a site is valid
  only while its function is live. gclongjmp (HLE) loads the guest registers from the buffer, then resumes the
  site's fiber and host-longjmps to it (the guest call returns again with the value); a buffer whose LR no live
  site saved starts a new fiber at that LR. A fiber that longjmps away with no live site is freed.

## Runtime changes for this game
- MEM2: IOS56 leaves the game 0x90000800-0x935E0000 (later IOSes); the game uses all of it (its sixth MEM2 heap
  failed with the old 0x933E0000 end). IOS < 30 keeps the old layout.
- HID0/1/2/4, WPAR, the locked-cache DMA registers and L2CR are CPU-wide, not per thread: the THP video decoder
  (a THP player thread) checks HID2.LCE set by LCEnable on the main thread.
- Threads: a thread that exits with OSExitThread and whose context is reused by OSCreateThread starts over on its
  host thread (host longjmp back into thread_main); the exiting thread merely being selected again is not a restart.
- KPADStatus is 0xF0 bytes in this SDK (MotionPlus fields after ex_status); KPADRead is a tail call into KPADiRead.
- Nunchuk always attached (G_NUNCHUK): WPADProbe reports FREESTYLE, KPADRead dev_type 1 and ex_status.fs stick.
  WPADGetInfo (battery check) answers for remote 1.

## game.h constants
- __AXDSPResumeCallback 0x80150ED0, DecrementerExceptionCallback 0x8011FF30, iosFree 0x801B3AA0, OSExitThread
  0x80129880, SelectThread idle branch 0x801294D8, interrupt table r13-0x4428, IOS heap r13-0x5304.

## Testing
- Same switches as the other recomps: `POINTER=x,y`, `AUTOPRESS_FRAMES=1 AUTOPRESS=A@400-406,...`, `SHOT_EVERY`,
  `SHOT_DIR`, `TIMEOUT` (seconds, default 15), `TRACEFN=addr,...`, `TDEBUG=1` (scheduler switches).
