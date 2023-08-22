#include "main.h"
/**
 * print_uint - prints unsgined integer
 * @arg: argument to print
 * Return: number of characters printed
 */
int print_uint(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	return (print_number(n));
}
/**
 * print_number - prints integer
 * @num: number
 * @len: integer length
 * Return: nothing
 */
int print_number(unsigned int num )
{
	int printed_chars=0;

	if (num > 1)
	{
		 printed_chars += print_number(num / 10);
	}
	_putchar((num % 10) + '0');
	printed_chars++;

    return printed_chars;
}
