#include "main.h"

/**
 * print_givin_number - print a givin number
 *
 * Return: void
 *
 * @n: the entered number
 *
*/

void print_givin_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num >= 10)
	{
		print_givin_number(num / 10);
	}
	_putchar('0' + num % 10);
}
