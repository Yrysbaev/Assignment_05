# Systems Programming - Assignment 05

## Professor's Name
Glory Kurian

## Course Information
COMP 2415 Systems Programming

## Date
April 30, 2024

## Overview
This repository contains the solutions and explanations for Assignment 05 of the Systems Programming course. Below are the key topics covered along with a brief description of each.

### Topics Covered

- **Library Function Calls vs. System Calls**
  - Understand the difference between library functions like `printf()` and system calls which interact directly with the operating system.

- **Exec Family of System Calls**
  - Explore how `exec()` system calls replace the current process image with a new process image.

- **Process Termination**
  - Learn about the system calls (`exit` and `_exit`) used for process termination in C programming.

- **Signal Handlers**
  - Discuss the role of signal handlers in managing OS signals for process control.

- **Header Files and Libraries**
  - Examine the significance of header files in managing and utilizing C libraries effectively.

- **Curses Library**
  - Introduction to the Curses library used for creating text-based user interfaces and its primary I/O functions.

- **X Library vs. Win32 Library**
  - Compare the X Library and Win32 API in terms of their suitability for different operating systems and levels of abstraction.

- **Creating and Using Custom Libraries**
  - Instructions on how to create and use your own static and dynamic libraries in C programming.

## How to Compile and Run
Provide instructions on how to compile and run the applications discussed in the assignments. For example:
```bash
gcc -o myapp myapp.c -L. -lmylib
./myapp
