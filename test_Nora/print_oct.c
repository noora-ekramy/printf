#include "main.h"

/**
 * print_oct - prints unsigned integer to octal
 * @arg: integer
 * Return: printed len
 */
int print_oct(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	return printOctal(num);;
}

/**
 * printBinary - prints unsigned integer to binary
 * @num: integer
 * Return: printed len
 */
int printBinary(unsigned int num)
{
	int printed_chars=0;

	if (num > 1)
	{
		 printed_chars += printBinary(num / 8);
	}
	_putchar((num % 8) + '0');
	printed_chars++;

    return (printed_chars);
}
