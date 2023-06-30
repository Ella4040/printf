#include "main.h"
/**
 * nb_digit - A function that counts how many digits in a number.
 * @n: An integer to count the digits of.
 * Return: the count of digits.
 */
int nb_digit(int n)
{
	int i = 0; /* A variable to get the count */

	if (n == 0)
		return (1); /*Since it's 0 then only 1 digit */
	while (n != 0)
	{
		n /= 10; /* Dividing the number */
		i++;
	}
	return (i);
}
