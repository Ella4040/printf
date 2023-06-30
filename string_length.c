#include "main.h"
/**
 * len - A function that calculates a string's length.
 * @string: A string to calculate the length.
 * Return: The length.
 */
int len(char *string)
{
	int i = 0; /* a counter */

	if (string == NULL)
		return (0);

	while (string[i] != '\0')
	{
		i++;
		if (i == 0) /* to resolve overflow issues */
			return (-1);
	}
	return (i);
}
