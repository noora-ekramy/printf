#include "main.h"
#include "print_number.c"

/**
 * print_number - print a givin number
 *
 * Return: void
 *
 * @n: the entered number
 *
*/

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
