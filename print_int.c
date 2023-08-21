#include "main.h"
/**
 * print_int - prints integer
 * @arg: argument to print
 * Return: number of characters printed
 */
int print_int(va_list arg)
{
	int n = va_arg(arg, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;

		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}

	_putchar(last + '0');
	return (i);
}
/**
 * print_number - prints integer
 * @num: number
 * @len: integer length
 * Return: nothing
 */
int print_number(int num, int len)
{
	if (num <= 0)
	{
		return (len);
	}
	len = print_number(num / 10, len + 1);
	_putchar('0' + (num % 10));
	return (len);
}
