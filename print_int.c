#include "main.h"
/**
 * print_int - prints integer
 * @arg: argument to print
 * Return: number of characters printed
 */
int print_int(va_list arg)
{
        int n;
        int len;

        n = va_arg(arg, int);
        len=0;
        if(n < 0)
        {
                n = -n;
                _putchar('-');
                len++;
        }
        if(n == 0)
        {
                _putchar('0');
                len++;
        }
        len += print_number(n, 0);

        return (len);
}
/**
 * print_number - prints integer
 * @num: number
 * @len: integer length
 * Return: nothing
 */
int print_number(int num ,int len)
{
        if(num <= 0)
        {
                return (len);
        }
        len =print_number(num / 10 , len+1);
        _putchar('0' + (num % 10));
        return (len);
}
