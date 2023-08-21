#ifndef MAIN_H
#define MAIN_H

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
int print_percent(int i);
int print_int(int i);
int print_binary(int i);
void print_unsigned_number(unsigned int n);
int print_unsigned(unsigned int i);
int print_octal(int i);
int print_hex(int i);
int print_capital_hex(int i);

#endif
