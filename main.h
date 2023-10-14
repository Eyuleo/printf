#ifndef MAIN_H
#define MAIN_H
#ifndef BUFF_SIZE
#define BUFF_SIZE 1024
#include <stdio.h>
#include <stdarg.hi>
#include <stdlib.h>
#include <strings.h>
#include <unistd.h>
int _printf(const char *format, ...);
int print_int(const char *format, ...);
#endif
