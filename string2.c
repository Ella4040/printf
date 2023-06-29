#include "main.h"
/**
 * print_unsigned - Prints an unsigned number
 * Return: The number of printed characters.
 */
void print_binary(unsigned int n)
{
	if (n == 0)
	{
		 _putchar ("0");
		return;
	}

	int binary[32];
	int index = 0;

	while (n > 0)
	{
		binary[index++] = n % 2;
		n /= 2;
	}

	for (int i = index - 1; i >= 0; i--) 
	{
	printf("%d", binary[i]);
	}
}
