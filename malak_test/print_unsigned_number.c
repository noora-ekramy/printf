#include "main.h"

/**
 * print_unsigned_number - print positive number
 *
 * Return: void
 *
 * @n: the number to print
*/

void print_unsigned_number(int n)
{
	unsigned int num = n;

	if (num >= 10)
	{
		print_number(num / 10);
	}
	_putchar('0' + num % 10);
}
