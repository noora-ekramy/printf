#include "main.h"

/**
 * print_binary - print a binary number
 *
 * Return: number of digits
 *
 * @i: the int to print its binary
*/

int print_binary(int i)
{
	int count = 0, binary, tens = 1;

	while (i > 0)
	{
		binary += (i % 2) * tens;
		num /= 2;
		tens *= 10;
		count++;
	}
	print_unsigned_number(binary);
	return (count);
}
