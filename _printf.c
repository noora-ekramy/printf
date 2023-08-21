#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>


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
	unsigned int count = 0, i = 0;

	va_start(args, format);
	if (format == NULL)
		return ();
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
