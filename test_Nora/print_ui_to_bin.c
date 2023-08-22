#include "main.h"

/**
 * print_ui_to_bin - prints unsigned integer to binary
 * @arg: integer
 * Return: printed len
 */
int print_ui_to_bin(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);

	return (printBinary(num));
}

/**
 * printBinary - prints unsigned integer to binary
 * @num: integer
 * Return: printed len
 */
int printBinary(unsigned int num)
{
	int printed_chars = 0;

	if (num > 1)
	{
		printed_chars += printBinary(num / 2);
	}
	_putchar((num % 2) + '0');
	printed_chars++;

	return (printed_chars);
}
