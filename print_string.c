#include "main.h"
/**
 * print_string - A function to print a string
 * @args: a list containing the characters to print
 * Return:  the number of characters printed, -1 if error occures
 */
int print_string(va_list args)
{
	char *list = va_arg(args, char *); /* Get the character list from the variable argument list */
	int length; /* the variable where we're gonna store the string's length */
	int j; /* for the loop we used */

	if (list == NULL)
	{
		list = "(null)";
	}
	length = len(list); /* To go through the string */
	for (j = 0; j < length; j++)
	{		
		_putchar(list[j]);
	}
	return (length);
}
