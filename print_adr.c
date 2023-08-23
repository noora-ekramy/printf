#include "main.h"

/**
 * print_adr - print an address of var
 * @arg: the intger
 * Return: number of digits some things 
 *
*/

int print_adr(va_list arg)
{
	int count = 0;
	void *ptr = va_arg(arg, void *);
	uintptr_t address = (uintptr_t)ptr;

	if (ptr == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		return (5);
	}

	_putchar('0');
	_putchar('x');
	count += 2 + print_address(address);

	return (count);
}
