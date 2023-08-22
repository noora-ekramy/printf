#include "main.h"

/**
 * Print_ui_to_bin - prints unsigned integer to binary
 * @arg: integer
 * Return: printed len
 */
int print_ui_to_bin(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);

	return printBinary(num);;
}

int printBinary(unsigned int num)
{
	int printed_chars=0;

	if (num > 1)
	{
		 printed_chars += printBinary(num / 2);
	}
	printf("%d", num % 2);
	printed_chars++;

    return printed_chars;
}
