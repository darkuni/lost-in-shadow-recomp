// Per-game constants for Lost in Shadow (Wii disc, NTSC-U, SDWE18, Rev 1).
// Addresses come from config/symbols.txt (dtk + naming passes vs Zack & Wiki, TARGET: Terror, Geometry Wars,
// Chocobo's Dungeon, My Life as a Dark Lord and Gradius ReBirth); r13 offsets were read from the instruction
// that loads the variable in the named SDK function.
#pragma once
#define GAME_NAME        "Lost in Shadow"
#define GAME_EXE         "lostinshadow"
#define GAME_INI         "lostinshadow.ini"

#define G_AX_RESUME_CB          0x80150ED0u   // __AXDSPResumeCallback
#define G_DECREMENTER_CB        0x8011FF30u   // DecrementerExceptionCallback
#define G_IOS_FREE              0x801B3AA0u   // iosFree(heap, ptr)
#define G_OS_EXIT_THREAD        0x80129880u   // OSExitThread
#define G_SDA_INTERRUPT_TABLE   0x4428u       // __OSGetInterruptHandler: lwz r4,-0x4428(r13)
#define G_SDA_IOS_HEAP          0x5304u       // __ios_Ipc2: lwz r3,-0x5304(r13) before iosFree
#define G_FN_OS_EXIT_THREAD     f_80129880
#define G_FN_IOS_FREE           f_801B3AA0
#define G_KPAD_STATUS_SIZE      0xF0u         // KPADStatus (Dec 2009 KPAD, MotionPlus fields): KPADRead buffer stride
#define G_NUNCHUK               1             // Nunchuk always attached (the game requires it); see hle_input.cpp
