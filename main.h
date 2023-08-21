#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct format - match specifiers for _printf
 * @sp: type char pointer of the specifier
 * @fun: type pointer to function for  specifier
 *
 */

typedef struct format
{
	char *sp;
	int (*fun)();
} specifier_match;

int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int print_number(int num ,int len);
int print_int(va_list arg);
int _putchar(char c);
#endif
