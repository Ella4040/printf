#include "main.h"
/**
 * print_char - a function to print a character
 * @args: The list containing the characters to print
 * Return: Always 1.
 */
int print_char(va_list args)
{
	char ch = (char)va_arg(args, int);

	_putchar(ch);
	return (1);
}
