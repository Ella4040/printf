/* This our header file for printf alx project */
#ifndef MAIN_H
#define MAIN_H

/* While coding we'll need the following libraries */
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/* First of all, here's our _putchar function*/
int _putchar(char b);

/* Here's our customized printf function */
int _printf(const char *format, ...);

/* We notice that we're in need of a structure so our code won't be long */

/**
 * struct conversion - a stucture that chose which function is suitable for each
 * 			conversion specifier.
 * @specifier: the given specifier
 * @function: pointer to the suitable function for the specifier.
 */
typedef struct conversion
{
	char *specifier;
	int (*function)();
} convert_choice;

/* We need the help of some functions */
int print_string(va_list args); /* function for strings */
int print_char(va_list args); /* function for characters */
int print_decimal(va_list args); /* function for unsigned integer */
int print_binary(va_list args); /* function to convert to binary */
int print_percent(va_list args); /*function to print percent */
int print_unsigned_decimal(va_list args); /* function to print unsigned integer */
/* Here's some supplimentary function that helped us during our work as well */
int len(char *string); /* function that return the length of a string */
int nb_digit(int n); /* function that return the number of digit */

/* For task 2 we needed a buffer */
#define BUFF_SIZE 1024

#endif
