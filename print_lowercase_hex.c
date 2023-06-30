#include "main.h"
/**
 * print_lowercase_hex - A function that prints an unsigned integer in hexadecimal (lowecase).
 * @args: The list containing the unsigned integer to print.
 * Return: The number of characters printed.
 */
int print_lowercase_hex(va_list args)
{
        unsigned int n = va_arg(args, unsigned int);
        int i; /* To go through the loop */
        int count = 0; /* This is our counter */
        char hex[1024]; /* a variable that will store '0123456789abcdef' */
        int r; /* a variable that will store the remainder of division */
        int j = 0; /* we're gonna use this as an index for hex variable */
        char *hexalpha = "abcdef";  /* Alphabets used in hexadecimal in lowercase */

        if (n == 0)
        {
                _putchar('0');
                return (1); /* only one chracater printed */
        }

        while (n > 0)
        {
                r = n % 16; /* To get a remainder that is "0123456789abcdef" */
                if (r < 10)
                        hex[j++] = r + '0'; /* conversion to a character */
                else
                        hex[j++] = hexalpha[r - 10];
                n /= 16;
        }

        for (i = j - 1; i >= 0; i--)
        {
                _putchar(hex[i]);
                count++;
        }

        return (count);
}
