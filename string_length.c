#include "main.h"
/**
 * len - A function that calculates a string's length
 * @string: A string to calculate the length
 * Return: The length
 */
int len(char *string)
{
	int i; /* a counter */

	while (string[i] != '\0')
		i++;
	return (i);
}
