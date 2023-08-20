#include "main.h"
/**
 * printf_string - print a string.
 * @arg: argumen t.
 * Return: the length of the string.
 */
int print_string(va_list arg)
{
        char *str;
        int len;

        str = va_arg(arg, char *);
        len = 0;
        while (str[len])
        {
                write(1, &str[len], 1);
                len++;
        }
        return (len);
}
