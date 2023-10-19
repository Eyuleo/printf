#include "main.h"
/**
 * _printf - prints to stdout
 * @format: format specifier
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list argp;
	int count;

	va_start(argp, format);
	count = 0;
	while (*format != 0)
	{
		if (*format == '%')
			count += print_format(*(++format), argp);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(argp);
	return (count);
}
