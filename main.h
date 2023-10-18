#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int print_format(char specifier, va_list argp);
int print_char(int c);
int print_str(char *str);
int print_digit(long n, int base)
#endif
