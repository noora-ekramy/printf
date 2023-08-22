#include "main.h"

/**
 * print_String - print string without some chars
 *
 * Return: number of printed chars
 *
 * @args: the argument to deal with
*/

int print_String(va_list args)
{
	char *str;
	int itr = 0, count = 0;

	str = va_arg(args, char *);
	for (itr = 0; str[itr] != '\0'; itr++)
	{
		if ((str[itr] > 0 && str[itr] < 32) || str[itr] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += print_Hex(str[itr]);
			count += 2;
		}
		else
		{
			_putchar(str[itr]);
			count++;
		}
	}
}
