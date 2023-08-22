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
int print_number(int num, int len);
int print_int(va_list arg);
int _putchar(char c);
int matching_format(const char *format, va_list args);
int print_ui_to_bin(va_list arg);
int printBinary(unsigned int num);
int print_uint(va_list arg);
int print_number(unsigned int num);
#endif
