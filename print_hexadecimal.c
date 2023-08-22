#include "main.h"

/**
 * print_hexadecimal - print hexadecimal number
 *
 * Return: the number of printed numbers
 *
 * @i: the number to print
*/

int print_hexadecimal(unsigned int i)
{
	int count = 0, division, iterate = 0;
	char hex[10];

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}
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
