#include "main.h"

/**
 * print_hex - print an intger in hexadicimel
 *
 * Return: number of digits
 *
 * @i: the intger
*/

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
