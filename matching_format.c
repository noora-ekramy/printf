#include "main.h"
/**
 * matching_format - matches the output to the function
 * @format: the char
 * @args: argument
 * Return: the printed_len
 */
int matching_format(const char *format, va_list args)
{
	if (*format == 'c')
		return (print_char(args));
	else if (*format == 's')
		return (print_string(args));
	else if (*format == 'i' || *format == 'd')
		return (print_int(args));
	else if (*format == 'b')
		return (print_ui_to_bin(args));
	else if (*format == 'u')
		return print_uint(args);
	else if (*format == '%')
	{
		_putchar('%');
		return (1);
	}
	else
	{
		_putchar('%');
		_putchar(*format);
		return (2);
	}
}
