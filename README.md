# Lost in Shadow (Wii, NTSC-U) - native recompilation

A static recompilation of **Lost in Shadow** for Wii (disc, NTSC-U, `SDWE18` Rev 1, Hudson Soft, 2011) to native code.
The game's PowerPC executable *and its 34 DLL modules* (`files/dll/*.rel`) are translated to C++ and run on Windows and
Linux (SteamOS / Steam Deck) with a small runtime that replaces the Wii hardware, IOS and the DSP.

**No game data is included.** You need your own copy of the game as a disc image (`.iso`, `.ciso` or `.wbfs`).

## Status

Work in progress. Boots through the safety and Nunchuk screens, the title screen and the opening movie (Linux headless
tests). Controls: a gamepad or WASD drives the Nunchuk stick, the mouse (or the right stick) is the Wii Remote pointer,
and a real Wii Remote paired over Bluetooth works for buttons, motion and pointer.

## Download

Test builds: GitHub Actions (Windows zip and Linux tar.gz). Unpack, put your disc image in the same folder and run
`lostinshadow.exe` (Windows) or `./lostinshadow` (Linux): the first start builds the `game` folder from it. The
zip's `README.txt` has the controls.

## Building

Same tool chain as the other Wii recomps (Zack & Wiki, TARGET: Terror, Geometry Wars: Galaxies): the generated C++ is
in `src/gen`; GitHub Actions cross-compiles the Windows exe with mingw-w64 and SDL2 and builds the Linux one with
`-DUSE_SDL=ON`. Regenerating needs the game's `main.dol` (`src/main.dol`) and DLLs (`rels/*.rel`) from your disc
(`tools/prepare_disc.py`). See [NOTES.md](NOTES.md) for what this game needed: REL modules, Hudson's setjmp/longjmp
process system, and the rest.

## Disclaimer

Unofficial fan project, **not affiliated with, endorsed by, or sponsored by** Hudson Soft, Konami or Nintendo.
*Lost in Shadow* and all related names and marks belong to their respective owners. This repository and its builds
contain no game data; `src/gen` and the exe contain code machine-translated from the game's executable and DLLs.

## License

The project's own code is released under the [MIT License](LICENSE). Bundled third-party components keep their own
licenses; see [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).
