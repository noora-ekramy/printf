#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int _putchar(char c);
void print_number(int n);
int _printf(const char *format, ...);
int print_char(char c);
int print_string(const char *s);
int print_percent();
int print_int(int i);


int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int count = 0, i = 0;

	va_start(args, format);
	if (format == NULL)
		return (1);
	for (; format[i] != 0; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				count += print_char(va_arg(args, int));
			else if (format[i] == 's')
				count += print_string(va_arg(args, char *));
			else if (format[i] == '%')
				count += print_percent();

			else
			{
				i--;
				count += print_percent();
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int print_char(char c)
{
	_putchar(c);
	return (1);
}

int print_int(int i)
{
	int count = 0;

	print_number(i);
	while (i > 0)
	{
		count++;
		i /= 10;
	}
	return (count);
}

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num >= 10)
	{
		print_number(num / 10);
	}
	_putchar('0' + num % 10);
}

int print_percent()
{
	_putchar('%');
	return (1);
}

int print_string(const char *s)
{
	int i = 0, count = 0;

	for (; s[i] != 0; i++)
	{
		_putchar(s[i]);
		count++;
	}
	return (count);
}


