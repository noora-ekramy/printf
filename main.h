#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int print_int(va_list arg);
int _putchar(char c);
int matching_format(const char *format, va_list args);
int print_ui_to_bin(va_list arg);
int printBinary(unsigned int num);
int print_uint(va_list arg);
int print_number(unsigned int num);
int printOctal(unsigned int num);
int print_oct(va_list arg);
int print_hex(va_list arg);
int print_Hex(va_list arg);
int print_String(va_list args);
void print_unsigned_number(unsigned int n);
int print_hexadecimal(unsigned int i);
int print_address(uintptr_t i);
int print_adr(va_list arg);
int print_positive(va_list arg);

#endif
