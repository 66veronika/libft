*This project has been created as part of the 42 curriculum by vskopova.*

## Description
The **ft_printf** project is a reimplementation of the standard C library function `printf`, which prints characters to the standard output and returns the total number of printed characters. 
The goal of this project is to gain a deeper understanding of variadic functions. 

This implementation mimics the behavior of the original printf function for a limited set of format specifiers. The project is compiled as a static library (`libftprintf.a`) that can be linked to other C programs.

## INSTRUCTIONS
In order to compile we first have to generate the file libftprintf.a:
1. make

2. cc main.c libftprintf.a


## ALGORITHM AND DATA STRUCTURE
The ft_prntf function is based on a linear parsing algorithm. The format string is processed character by character from left to right. 
When a regular character is encountered, it is immediately written to the standard output through ft_putchar.
When a % character is found, the following character is interpreted as a format specifier, and the corresponding variadic argument is retrieved using va_arg. The argument is then printed by a dedicated handler function depending on its type.
The total number of printed characters is accumulated and returned, matching the behaviour of the stanard printf function.

## RESOURCES
https://en.wikipedia.org/wiki/Printf
https://www.tutorialspoint.com/cprogramming/c_format_specifiers.htm
https://www.w3schools.com/c/c_variables_format.php
https://www.geeksforgeeks.org/c/format-specifiers-in-c/
https://www.geeksforgeeks.org/c/variadic-functions-in-c/
https://www.youtube.com/watch?v=kM-DOhKR080

#### Use of AI

AI tools were used as a learning aid to:
 - Clarify the behavior of printf and variadic functions
 - Understand edge cases (e.g., NULL strings, pointer formatting)
 