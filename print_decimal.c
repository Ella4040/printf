#include "main.h"
/**
 * print_decimal - A function that prints a signed decimal integer
 * @args: The containing the elements we want to print.
 * Return: The number of printed characters.
 */
int print_decimal(va_list args)
{
	int n = va_arg(args, int); /* To get the list of decimals arguments */
	int sign = 0; /* 0 if it's positive, 1 if it's negative */
	int i; /* The variable that will store the count of digits*/
	char *array; /* a buffer to store the individual digits */
	int k; /* loop counter */
	int count = 0; /* variable that wll store the count of printed characters */

	if (n < 0)
	{
		sign = 1; /* flag 1 means negative */
		n = -n;
	}
	i = nb_digit(n);
	if (n == 0)
	{
		_putchar('0');
		return (1); /* only one character was printed */
	}

	array = (char *)malloc(i * sizeof(char));
	if (array == NULL)
	{
		return (-1); /* a case of failure */
	}

	k = 0;
	while (n != 0)
	{
		array[k++] = (n % 10) + '0';
		n /= 10; /* to retrieve the least significant digit */
	}

	if (sign)
		_putchar('-'); /* the negative sign */

	while (k > 0)
	{
		_putchar(array[--k]);
		count++;
	}

	free(array);

	return (count);
}
