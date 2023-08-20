#include "main.h"

/**
 * _printf - prints the input according to a format
 * @format : the formating string 
 *
 * Return : number of printed chars
 */
int _printf(const char *format, ...)
{
	int printed_chars =0;
	va_list args;
	char c;
	char *str;
	int len;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
		       	switch (*format)
			{
				case 'c':
					c = (char) va_arg(args, int);
					write(1, &c, 1);
					printed_chars++;
					break;
				case 's':
					str = va_arg(args, char *);
					len = 0;
					while (str[len])
					{
						write(1, &str[len], 1);
						len++;
						printed_chars++;
					}
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
	return(printed_chars);
}
