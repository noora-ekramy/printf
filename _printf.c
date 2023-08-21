#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>



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
		return (NULL);
	for (; format[i] != 0; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				count += print_char(va_arg(args, int));
			else if (format[i] == 's')
				count += print_string(va_arg(args, char *));
			else if (format[i] == '%')
				count += print_percent();
			else if (format[i] == 'i' || format[i] == 'd')
				count += print_int(va_arg(args, int));
			else if (format[i] == 'b')
				count += print_binary(va_arg(args, int));
			else if (format[i] == 'u')
				count += print_unsigned(va_arg(args, unsigned int));
			/*
			else if (format[i] == 'o')
				count += print_octal(va_arg(args, int));
			else if (format[i] == 'x')
				count += print_hex(va_arg(args, int));
			else if (format[i] == 'X')
				count += print_capital_hex(va_arg(args, int));
			*/

			else
			{
				i--;
				count += print_percent();
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
