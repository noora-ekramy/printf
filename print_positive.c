#include "main.h"

/**
 * print_positive - print postive if number more than 0
 *
 * Return: number of digits
 *
 * @arg: the number to pirnt
 *
*/

int print_positive(va_list arg)
{
	int i = va_arg(arg, int), count = 0;

	if (number > 0)
	{
		_putchar('+');
		count++;
	}
	print_givin_number(i);
	while (i > 0)
	{
		count++;
		i /= 10;
	}
	return (count);

}
