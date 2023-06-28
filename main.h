/* This our header file for printf alx project */
#ifndef MAIN_H
#define MAIN_H

/*They are library variable headers*/
#include <stdio.h>

/* First of all, here's our _putchar function*/
int _putchar(char str);

/* While coding we'll need the following libraries */
#include <stdarg.h>
#include <unistd.h>

/* Here's our customized printf function */
int _printf(const char *format, ...);

/* We need the help of some functions */
int print_string(va_list args); /* function for strings */
int print_char(va_list args); /* function for characters */
int print_binary(unsigned int n); /* function to convert to binary */

/* For task 2 we needed a buffer */
#define BUFF_SIZE 1024

#endif
