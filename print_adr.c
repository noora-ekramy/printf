#include "main.h"

/**
 * print_adr - print an address of var
 * @arg: the intger
 * Return: number of digits
 *
*/

int print_adr(va_list arg)
{
	int count = 0;
	void *ptr = va_arg(arg, void *);
	uintptr_t address = (uintptr_t)ptr;

	_putchar('0');
	_putchar('x');
	count += 2 + print_address(address);

	return (count);
}
