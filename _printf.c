#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

int _putchar(char c);
void print_number(int n);
int _printf(const char *format, ...);
int print_char(char c);
int print_string(const char *s);
int print_percent(void);
int print_int(int i);
int print_binary(int i);
void print_unsigned_number(unsigned int n);
int print_unsigned(unsigned int i);
int print_octal(int i);
int print_hex(int i);
int print_capital_hex(int i);


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
			else if (format[i] == 'o')
				count += print_octal(va_arg(args, int));
			else if (format[i] == 'x')
				count += print_hex(va_arg(args, int));
			else if (format[i] == 'X')
				count += print_capital_hex(va_arg(args, int));

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

int _putchar(char c)
{
	return (write(1, &c, 1));
}


int print_binary(int i)
{
	int count = 0, binary = 0, tens = 1;

	while (i > 0)
	{
		binary += (i % 2) * tens;
		i /= 2;
		tens *= 10;
		count++;
	}
	print_unsigned_number(binary);
	return (count);
}


int print_capital_hex(int i)
{
	int count = 0, division = 0, iterate = 0;
	char hex[50];

	while (i > 0)
	{
		division = i % 16;
		if (division < 10)
			hex[iterate] = '0' + division;
		else
			hex[iterate] = 'A' + division - 10;
		i /= 16;
		count++;
		iterate++;
	}
	iterate--;
	while (hex[iterate] != 0)
	{
		_putchar(hex[iterate]);
		iterate--;
	}
	return (count);
}

int print_char(char c)
{
	_putchar(c);
	return (1);
}

int print_hex(int i)
{
	int count = 0, division, iterate = 0;
	char hex[50];

	while (i > 0)
	{
		division = i % 16;
		if (division < 10)
			hex[iterate] = '0' + division;
		else
			hex[iterate] = 'a' + division - 10;
		i /= 16;
		count++;
		iterate++;
	}
	iterate--;
	while (hex[iterate] != 0)
	{
		_putchar(hex[iterate]);
		iterate--;
	}
	return (count);
}

int print_int(int i)
{
	int count = 0;

	print_number(i);
	while (i > 0)
	{
		count++;
		i /= 10;
	}
	return (count);
}

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num >= 10)
	{
		print_number(num / 10);
	}
	_putchar('0' + num % 10);
}

int print_octal(int i)
{
	int octal = 0, tens = 1, count = 0;

	while (i > 0)
	{
		octal += (i % 10) * tens;
		i /= 8;
		tens *= 10;
		count++;
	}
	print_number(octal);
	return (count);
}

int print_percent(void)
{
	_putchar('%');
	return (1);
}

int print_string(const char *s)
{
	int i = 0, count = 0;

	for (; s[i] != 0; i++)
	{
		_putchar(s[i]);
		count++;
	}
	return (count);
}

int print_unsigned(unsigned int i)
{
	unsigned int count = 0;

	print_unsigned_number(i);
	while (i > 0)
	{
		count++;
		i /= 10;
	}
	return (count);
}

void print_unsigned_number(unsigned int n)
{
	unsigned int num = n;

	if (num >= 10)
	{
		print_number(num / 10);
	}
	_putchar('0' + num % 10);
}
