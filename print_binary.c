#include "main.h"
/**
 * print_binary - A function that prints an unsigned integer in binary.
 * @args: The list containing the unsigned integer to print.
 * Return: The number of characters printed.
 */
int print_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int i; /* To go through the loop */
	int count = 0; /* This is our counter */
	char bin[32]; /* a variable that will store either '0' or '1' */
	int r; /* a variable that will store the remainder of division */
	int j = 0; /* we're gonna use this as an index for bin variable */

	if (n == 0)
	{
		_putchar('0');
		return (1); /* onyly one chracater printed */
	}

	while (n > 0)
	{
		r = n % 2; /* To get a remainder that is either 0 or 1 */
		bin[j++] = r + '0'; /* conversion to a character */
		n /= 2;
	}

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(bin[i]);
		count++;
	}

	return (count);
}
