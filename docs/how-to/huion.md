---
title: Huion Tablets
parent: How-To
---

# Using Huion Tablets with OpenKneeboard

Huion tablets can either be used with Huion's drivers, or [with OpenTabletDriver](https://go.openkneeboard.com/otd-ipc).

## Using Huion's drivers

If you're running v1.3, you need to enable the tablet by:

1. Open OpenKneeboard's settings page (bottom left)
2. Go to the input settings page
3. Set WinTab mode to 'invasive'

For earlier versions, 'invasive' mode is always enabled.

It's easiest to set all of these settings for 'All Programs'; otherwise (for example, if you use your drawing tablet for drawing :p) you'll need to apply these settings both to the OpenKneeboard app, and to every game you want to use the tablet with. For example, you may need to create a Wacom profile for both OpenKneeboard and DCS World.

To use the pen for drawing or UIs (e.g. PDF table of contents), you need to set the tip to 'Valid', and any other pen buttons to 'Mouse Right Button':

![tip 'valid'](../screenshots/huion-tip.png)
![first button as 'Mouse Right Button'](../screenshots/huion-button-1.png)
![second button as 'Mouse Right Button'](../screenshots/huion-button-2.png)

If an on-pen button is being held while drawing, the pen will act as an eraser.

If you also want to use the on-tablet 'Press Keys' to change page/tabs, there are several remote control executables in `C:\Program Files\OpenKneeboard\utilities`:.

![OpenKneeboard-Remote-PREVIOUS_PAGE.exe, -NEXT_PAGE.exe, -NEXT_TAB.exe, etc](../screenshots/remote-controls.png)

To use these, open the Huion settings app, and set the press keys to 'run program', and browse to the executable you want. For example, if you want a press key to move to the next kneeboard page, select 'Run Program', then browse to and select `OpenKneeboard-RemoteControl-NEXT_PAGE.exe`:

![screenshot of run program -> NEXT_PAGE.exe](../screenshots/huion-presskeys.png)

While Huion tablets appear in OpenKneeboard's settings, the buttons can not be bound there unless a future version of Huion's driver supports the ExpressKeys API.

It is also not possible to use Huion's keypress emulation with OpenKneeboard, as Huion's keypress emulation is not compatible with DirectInput.
