#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int print_format(char specifier, va_list argp);
int print_char(int c);
int print_str(char *str);
int print_digit(long n, int base, int is_uppercase, int is_octal);
int print_pointer(void *ptr);
int print_binary(unsigned int n);
int print_non_printable_char(unsigned char c, char *buffer, int bufferIndex);
int print_string_with_escape(const char *str, char *buffer);
#endif
