#include "main.h"
#include "print_unsigned_number.c"

/**
 * print_unsigned - print positive number
 *
 * Return: number of digits
 *
 * @i: the number to print octal
*/

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
