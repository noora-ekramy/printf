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
		switch (*format)
		{
			case 'c':
				printed_chars += print_char(args);
				break;
			case 's':
				printed_chars += print_string(args);
				break;
			case '%':
				write(1, "%", 1);
				printed_chars++;
				break;
			default:
				write(1, "%", 1);
				write(1, format, 1);
				printed_chars += 2;
				break;
		}
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
