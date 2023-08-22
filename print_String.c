#include "main.h"

int print_two_hexadecimal(unsigned int i);

/**
 * print_String - print string without some chars
 *
 * Return: number of printed chars
 *
 * @args: the argument to deal with
*/

int print_String(va_list args)
{
	char *str;
	int itr = 0, count = 0;

	str = va_arg(args, char *);
	for (itr = 0; str[itr] != '\0'; itr++)
	{
		if ((str[itr] > 0 && str[itr] < 32) || str[itr] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += print_two_hexadecimal(str[itr]);
			count += 2;
		}
		else
		{
			_putchar(str[itr]);
			count++;
		}
	}
	return (count);
}

/**
 * print_two_hexadecimal - print two hexadecimal numbers
 *
 * Return: always 2
 *
 * @i: the number to print
*/

int print_two_hexadecimal(unsigned int i)
{
	int division, iterate = 0;
	char hex[10];

	if (i == 0)
	{
		_putchar('0');
		_putchar('0');
		return (2);
	}
	while (i > 0)
	{
		division = i % 16;
		if (division < 10)
			hex[iterate] = '0' + division;
		else
			hex[iterate] = 'A' + division - 10;
		i /= 16;
		iterate++;
	}
	iterate--;
	if (iterate == 0)
	{
		_putchar('0');
	}
	while (iterate >= 0)
	{
		_putchar(hex[iterate]);
		iterate--;
	}
	return (2);
}
