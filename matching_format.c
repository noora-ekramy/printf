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
		return (print_uint(args));
	else if (*format == 'o')
		return (print_oct(args));
	else if (*format == 'x')
		return (print_hex(args));
	else if (*format == 'X')
		return (print_Hex(args));
	else if (*format == 'S')
		return (print_String(args));
	else if (*format == 'p')
		return (print_adr(args));
	else if (*format == '+' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
	{
		format++;
		return (print_positive(args));
	}
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
