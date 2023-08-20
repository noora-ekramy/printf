#include "main.h"

/**
 * print_octal - print an intger in octal
 *
 * Return: number of digits
 *
 * @i: the intger
*/

int print_octal(int i)
{
	int octal = 0, tens = 1, count = 0;

	while (i > 0)
	{
		octal += (i % 10) * tens;
		i /= 8;
		tens *= 10;
		count++;
	}
	print_number(octal);
	return (count);
}
