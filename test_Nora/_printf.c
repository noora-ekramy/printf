#include "main.h"

/**
 * _printf - prints the input according to a format
 * @format: the formating string
 *
 * Return: number of printed chars
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
		{
		format++;
			printed_chars += matching_format(format, args);
		}
		else
		{
			write(1, format, 1);
			printed_chars++;
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}
