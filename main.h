#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
typedef struct format
{
	char *id;
	int (*f)();
} frmt_match;
int _strlen(char *str);
int _strlenconst(const char *str);
int  write_string(char str);
int print_char(va_list args);
int print_strings(va_list args);
int print_per(void);
int print_integer(va_list args);
int print_decimal(va_list args);
int convert_bin(va_list args);
int print_unsignedint(va_list args);
int print_octal(va_list args);
int print_hexa(va_list args);
int print_Hexa(va_list args);
int print_hex(unsigned long int num);
int print_Hex_ext(unsigned int num);
int print_str_exc(va_list args);
int print_pointer(va_list args);
int print_revstr(va_list args);
int print_rot13(va_list args);
int _printf(const char *format, ...);
#endif
