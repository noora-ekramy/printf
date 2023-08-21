#include "main.h"

/**
 * print_int - print an intger
 *
 * Return: number of digits
 *
 * @i: the intger
*/

int print_int(int i)
{
	int count = 0;

	print_number(i);
	while (i > 0)
	{
		count++;
		i /= 10;
	}
	return (count);
}
