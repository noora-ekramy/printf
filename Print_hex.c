#include "main.h"

/**
 * print_hex - print an intger in hexadicimel
 ** @arg: the intger
 * Return: number of digits
 *

*/

int print_hex(va_list arg)
{
	unsigned int i = va_arg(arg, unsigned int);
	int count = 0, division, iterate = 0;
	char hex[10];

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
	while (iterate >= 0)
	{
		_putchar(hex[iterate]);
		iterate--;
	}
	return (count);
}

/**
 * print_Hex - print an intger in hexadicimel
 ** @arg: the intger
 * Return: number of digits
 *

*/

int print_Hex(va_list arg)
{
	unsigned int i = va_arg(arg, unsigned int);
	int count = 0, division, iterate = 0;
	char hex[10];

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
	while (iterate >= 0)
	{
		_putchar(hex[iterate]);
		iterate--;
	}
	return (count);
}
