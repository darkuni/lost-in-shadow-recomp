Lost in Shadow (Wii) - native Windows and Linux build (static recompilation)  @VERSION@
https://github.com/darkuni/lost-in-shadow-recomp

No game data is included. You need your own Lost in Shadow disc image (Wii, NTSC-U, SDWE18)
as .iso, .ciso or .wbfs.

Setup
  Put your disc image (.iso, .ciso or .wbfs) in this folder and run lostinshadow.exe (Windows) or
  lostinshadow (Linux / Steam Deck: ./lostinshadow, or add it to Steam as a non-Steam game). On the
  first start it builds the "game" folder from it (a minute or two); after that the disc image isn't
  needed any more.

Requirements: 64-bit Windows 10/11, or 64-bit Linux with SDL2 (SteamOS has it; elsewhere install
libsdl2 / sdl2 from your package manager); a GPU with OpenGL 3.3.

Controls (Wii Remote + Nunchuk; the Nunchuk is always connected)
  Gamepad:  left stick = Nunchuk stick (move), A = A (jump), B = B (attack), X/Y = 1/2,
            LB/LT = Z, RB/RT = C, d-pad = d-pad, right stick = Wii Remote pointer,
            Start = +, Back = -, Guide = HOME
  Keyboard: WASD or arrows = Nunchuk stick, Space or X = A, Z = B, Shift = Z, C = C, 1/2 = 1/2,
            I/J/K/L = d-pad, Enter = +, Backspace = -, H = HOME
  Mouse:    point = Wii Remote pointer (Spangle), left button = A, right button = B ("Mouse
            buttons" in the settings menu, or controls = mouse_swap in lostinshadow.ini, swaps them)

Wii Remote motions (the game rarely needs them)
  Mouse:    hold the middle button (or Ctrl) and move the mouse: left/right twists the remote,
            up/down tilts it; fast moves are swings. Wheel = thrust toward / away from the screen.
  Keyboard: Q/E = twist left/right, R/F = tilt up/down

Real Wii Remote (optional)
  Pair it with Windows: Settings > Bluetooth > Add device, press the red SYNC button under the
  battery cover, pick "Nintendo RVL-CNT-01" (skip/leave the PIN empty). A Mayflash DolphinBar
  in mode 4 works too. Linux: pair it in the Bluetooth settings; reading it needs access to its
  /dev/hidraw device (a udev rule, e.g. KERNEL=="hidraw*", ATTRS{idVendor}=="057e", MODE="0666").
  Its buttons, motion and (with a sensor bar) pointer are used; the Nunchuk stick still comes
  from the gamepad / keyboard. wiimote = 0 in lostinshadow.ini turns it off.

Keys
  F1 / Esc (or Start+Back on a gamepad)  settings menu (resolution, widescreen, vsync, MSAA,
                                         texture filtering, mouse buttons, game speed)
  F11 / Alt+Enter                        fullscreen
  Hold Tab (or click the right stick)    fast-forward

Files
  lostinshadow.ini        settings (created on first run)
  lostinshadow.log        log of the last run - include it with bug reports
  lostinshadow_hang.txt   written if no frame is shown for 8 seconds - include it too
  nand\                   saves


Unofficial fan project, not affiliated with Hudson Soft, Konami or Nintendo.
The exe contains code machine-translated from the game's executable and its DLL modules; game
data comes from your own disc image.
System font: Droid Sans replacements from Dolphin (Apache 2.0, see ipl-font-licenses.txt).
