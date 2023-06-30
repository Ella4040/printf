#include "main.h"
/**
 * _putchar - Writes a character to the standard output stream.
 * @b: The character to be printed.
 * Return: 1 on success, printed character, - if failures occure
 */
int _putchar(char b)
{
	return (write(1, &b, 1));
}
