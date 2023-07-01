#include "main.h"
/**
 * print_rot - A function to print a string in caesar.
 * @args: a list containing the characters to print
 * Return:  the number of characters printed, -1 if error occures
 */
int print_rot(va_list args)
{
        char *list = va_arg(args, char *); /* Get the character list from the variable argument list */
        int length; /* the variable where we're gonna store the string's length */
        int j, i; /* for the loop we used */
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char caesar[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int flag = 0;

        if (list == NULL)
        {
                list = "(null)";
		return (6);
        }
        length = len(list); /* To go through the string */
        for (j = 0; j < length; j++)
        {
		for (i = 0; i < len(alphabet); i++)
		{
                	if (list[j] == alphabet[i])
                	{
				_putchar(caesar[i]);
				flag = 1; /* so we can actually treat it the right way */
                        	break;
                	}
		}
		if (flag == 0)
		{
                        _putchar(list[j]); /*this means that it's not an alphabet*/
                }
		flag = 0;
        }
        return (length);
}

