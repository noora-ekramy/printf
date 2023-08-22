#include "main.h"
/**
 * print_uint - prints unsgined integer
 * @arg: argument to print
 * Return: number of characters printed
 */
int print_uint(va_list arg)
{
	unsigned int i = va_arg(arg, unsigned int);
	
	int count = 0;
	if (i == 0)
	{
		_putchar('0');
		return (1);
	}
	print_unsigned_number(i);
	while (i > 0)
	{
		count++;
		i /= 10;
	}
	return (count);
}
/**
 * print_unsigned_number - print positive number
 * Return: void
 * @n: the number to print
*/
void print_unsigned_number(unsigned int n)
{
	unsigned int num = n;

	if (num >= 10)
	{
		print_unsigned_number(num / 10);
	}
	_putchar('0' + num % 10);
}
