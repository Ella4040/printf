#include "main.h"
/**
 * len - A function that calculates a string's length
 * @string: A string to calculate the length
 * Return: The length
 */
int len(char *string)
{
	int i = 0; /* a counter */

	while (string[i] != '\0')
		i++;
	return (i);
}
