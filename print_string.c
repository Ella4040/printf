#include "main.h"
/**
 * print_string - A function to print a string
 * @args: a list containing the characters to print
 * Return:  the number of characters printed, -1 if error occures
 */
int print_string(va_list args)
{
	int i = 0; /* the counter of printed characters */
	char *list = va_arg(args, char *); /* Get the character list from the variable argument list */
	int length; /* the variable where we're gonna store the string's length */

	if (list == NULL)
	{
		list = "(null)";
	}
	length = len(list); /* To go through the string */
	while (list[i] != '\0')
	{		
		_putchar(list[i]);
		i++;
	}
	return (i);
}
