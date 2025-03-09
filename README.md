# Windows Keylogger

A Windows-based keylogger that demonstrates the use of the Windows Hook API to intercept and log keyboard input.

## Overview

This project showcases the implementation of a keylogger for Windows systems using the Windows Hook API. The keylogger captures all keyboard input events and outputs them to the console in a human-readable format.

## Features

- Captures all keyboard input across the entire system
- Records special keys (Backspace, Enter, Shift, etc.) in a readable format
- Handles alphanumeric keys and various special keys
- Continuously monitors keyboard events using Windows message loop

## Technical Details

The keylogger uses the Windows Hook API, specifically `WH_KEYBOARD_LL` (low-level keyboard hook) to intercept keyboard events before they reach any application. This project demonstrates:

- Windows Hook API implementation
- Message processing in Windows
- Event-driven programming
- Virtual key code handling and translation

## Code Structure

- **hook_proc()**: The callback function that processes keyboard events
- **main()**: Sets up the hook and runs the message loop

## How It Works

1. The application installs a low-level keyboard hook using `SetWindowsHookExA()`
2. When a key is pressed, Windows calls the `hook_proc()` function
3. The function identifies the key pressed and displays it in a human-readable format
4. The application continues running within a message loop

## Build Instructions

### Prerequisites
- Windows operating system
- C compiler (GCC, MinGW, or Microsoft Visual C++)
- Windows SDK

### Compilation
```
gcc -o keylogger.exe keylogger.c -mwindows
```

## Usage

Run the compiled executable:

```
keylogger.exe
```

The program will display "Hook was installed" and begin logging keystrokes to the console.

## Educational Purpose

This project was created for educational purposes to understand:
- How Windows hook mechanisms work
- System-level keyboard event processing
- Windows API programming

## Ethical Considerations and Disclaimer

**IMPORTANT:** This software is provided for educational purposes only.

- Using this software to record keystrokes without explicit consent is illegal in most jurisdictions
- Always obtain proper authorization before monitoring any system
- I do not endorse or encourage the use of this code for malicious purposes

## Potential Improvements

- Log keystrokes to a file instead of the console
- Add timestamps to logged events
- Implement filtering for specific applications
- Add encryption for the logged data
- Create a stealth mode that hides the console window


## Acknowledgments

- Microsoft Documentation on Windows Hooks
- Windows API reference
- Youtube and forums
