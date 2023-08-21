#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int print_number(int num ,int len);
int print_int(va_list args);
int _putchar(char c);
#endif
