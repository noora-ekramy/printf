#include "main.h"

/**
 * _printf - print any thing
 *
 * @format: the string to print
 *
 * Return: number of printed char
*/


int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i = 0;

	va_start(args, format);
	if (format == NULL)
		format = "";
	for (; format[i] != 0; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				count += print_char(va_arg(args, char));
			else if (format[i] == 's')
				count += print_string(va_arg(args, char *));
			else if (format[i] == '%')
				count += print_percent(void);
			else if (format[i] == 'i' || format[i] == 'd')
				count += print_int(va_arg(args, int));

			else
			{
				i--;
				count += print_percent(void);
			}
		}
		va_end(args);
		return (count++);
	}
}
