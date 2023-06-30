#include "main.h"
/**
 * print_octal - A function that prints an unsigned integer in octal.
 * @args: The list containing the unsigned integer to print.
 * Return: The number of characters printed.
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int i; /* To go through the loop */
	int count = 0; /* This is our counter */
	char octal[32]; /* a variable that will store '01234567' */
	int r; /* a variable that will store the remainder of division */
	int j = 0; /* we're gonna use this as an index for bin variable */


	if (n == 0)
	{
		_putchar('0');
		return (1); /* only one chracater printed */
	}

	while (n > 0)
	{
		r = n % 8; /* To get a remainder that is "0123456" */
		octal[j++] = r + '0'; /* conversion to a character */
		n /= 8;
	}

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(octal[i]);
		count++;
	}

	return (count);
}
