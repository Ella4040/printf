#include "main.h"
/**
 * _printf - a function that produces output according to a format
 * @format: The format string specifying the desired output format.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
        va_list args; /* a variadic function */
        int count = 0;
        convert_choice list[] = {
                {"c", print_char}, {"R", print_rot},
                {"%", print_percent}, {"r", print_reverse},
                {"s", print_string}, {"x", print_lowercase_hex},
                {"d", print_decimal}, {"X", print_uppercase_hex},
                {"i", print_decimal}, {"o", print_octal},
                {"b", print_binary}, {"u", print_unsigned_decimal},
                {NULL, NULL}
        };
        int j, i; /* variables to make the route */

        va_start(args, format);

        for (i = 0; format[i] != '\0'; i++)
        {
                if (format[i] == '%') /* To see if there's any specifier */
                {
                        i++; /*in this case, we'll move to the next character*/
                        if (format[i] == '\0')
                                break;
                        for (j = 0; list[j].specifier != NULL; j++)
                        {
                                if (format[i] == *(list[j].specifier))
                                {
                                /* in this case we'll call the adequate conversion function according to our specifiers */
                                        count += list[j].function(args);
                                        break;
                                }
                        }
                        if (list[j].specifier == NULL)
                        {
                                /* if unrecognized character is past next to % we print this */
                                _putchar('%');
                                _putchar(format[i]);
                                count += 2;
                        }
                }
                else
                {
                        _putchar(format[i]);
                        count++;
                }
        }
        va_end(args);
        return (count);
}
