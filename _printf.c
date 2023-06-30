#include "main.h"
/**
 * _printf - a function that produces output according to a format.
 * @format: The format string specifying the desired output format
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args; /* a variadic function */
	int count = 0;
	convert_choice list[] = {
		{"c", print_char},
		{"%", print_percent},
		{"s", print_string},
		{"d", print_decimal},
		{"i", print_decimal}, {"o", print_octal},
		{"b", print_binary}, {"u", print_unsigned_decimal},
		{NULL, NULL}
	};
	convert_choice *ptr = list;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%') /* To see if there's any specifier */
		{
			format++; /*in this case, we'll move to the next character*/

			if (ptr->specifier == NULL)
			{
				_putchar('%');
				_putchar(*format);
				count += 2;
			}
			
			while (ptr->specifier != NULL)
			{
				if (*format == *(ptr->specifier))
				{
					count += ptr->function(args); /* we call the matching function */
					break;
				}
				ptr++;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++; /* let's move to the next character */
	}
	va_end(args); /* to clean up the list of arguments */
	return (count); /* The count of printed characters */
}
