#include "main.h"
/**
 * print_oct - print an intger in hexadicimel
 ** @arg: the intger
 * Return: number of digits
 *
*/
int print_oct(va_list arg)
{
	unsigned int i = va_arg(arg, unsigned int);
	int count = 0, division, iterate = 0;
	char hex[14];

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}
	while (i > 0)
	{
		division = i % 8;

			hex[iterate] = '0' + division;
		i /= 8;
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
