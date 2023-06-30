#include "main.h"
/**
 * print_percent - A function that print the symbol %
 * @args: a list containing the character to be printed.
 * Return: the number of characters printed.
 */
int print_percent(va_list args)
{
	(void)args; /* It's an unused argument */
	_putchar('%');
	return (1);
}
