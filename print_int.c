#include "main.h"
/**
 * print_int - prints integer
 * @arg: argument to print
 * Return: number of characters printed
 */
int print_int(va_list args) {
    int num = va_arg(args, int);
    int num_copy = num;
    int len = 0;

    if (num_copy == 0) {
        write(1, "0", 1);
        return 1;
    }

    if (num_copy < 0) {
        write(1, "-", 1);
        num_copy = -num_copy;
        len++;
    }

    int divisor = 1;
    while (num_copy / divisor > 0)
        divisor *= 10;

    while (divisor > 1) {
        divisor /= 10;
        char digit = (num / divisor) + '0';
        write(1, &digit, 1);
        num %= divisor;
        len++;
    }

    return len + 1;
}
