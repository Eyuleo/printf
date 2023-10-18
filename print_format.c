#include "main.h"
/**
 * print_format - specifies what to print
 * @specifier: what to print
 * @argp: num of args
 *
 * Return: chars printed
 */
int print_format(char specifier, va_list argp)
{
	int count = 0;

	if (specifier == 'c')
		count = print_char(va_arg(argp, int));
	else if (specifier == 's')
		count += print_str(va_arg(argp, char *));
	else if (specifier == 'd')
		count += print_digit((long)(va_arg(argp, int)), 10);
	else if (specifier == 'x')
		count += print_digit((long)(va_arg(argp, unsigned int)), 16);
	else
		write(1, &specifier, 1);
	return (count);
}
