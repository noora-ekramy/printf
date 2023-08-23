#include "main.h"

/**
 * print_address - print hex address
 *
 * Return: the number of the address
 *
 * @i: the number of the address
*/

int print_address(uintptr_t i)
{
	int count = 0, iterate;

	unsigned int long j;

	char hex[17];

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}

	iterate = sizeof(uintptr_t) * 2 - 1;
	while (i > 0)
	{
	int division = i % 16;

	if (division < 10)
		hex[iterate] = '0' + division;
	else
		hex[iterate] = 'a' + division - 10;
	i /= 16;
	count++;
	iterate--;
	}

	for (j = iterate + 1; j < sizeof(uintptr_t) * 2; j++)
	{
		_putchar(hex[j]);
	}

	return (count);
}
