*This project has been created as part of the 42 curriculum by vskopova.*

## Description
The **ft_printf** project is a reimplementation of the standard C library function `printf`.  
The goal of this project is to gain a deeper understanding of **variadic functions**, **formatted output**, and **low-level I/O operations** using the `write` system call.

This implementation mimics the behavior of the original `printf` function for a limited set of format specifiers, without using buffer management. The project is compiled as a static library (`libftprintf.a`) that can be linked to other C programs.

INSTRUCTIONS
To compile the project and create the static library, run:
1. make
	this will generate the file libftprintf.a

2. cc main.c libftprintf.a

Use of AI

AI tools were used as a learning aid to:
 - Clarify the behavior of printf and variadic functions
 - Understand edge cases (e.g., NULL strings, pointer formatting)
 - Review and improve code structure and explanations
 - All code was written, tested, and validated by the author.

ALGORITHM AND DATA STRUCTURE

RESOURCES
https://en.wikipedia.org/wiki/Printf
https://www.tutorialspoint.com/cprogramming/c_format_specifiers.htm
https://www.w3schools.com/c/c_variables_format.php
https://www.geeksforgeeks.org/c/format-specifiers-in-c/
https://www.geeksforgeeks.org/c/variadic-functions-in-c/
https://www.youtube.com/watch?v=kM-DOhKR080
