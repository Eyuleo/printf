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
	else if (specifier == 'd' || specifier == 'i')
		count += print_digit((long)(va_arg(argp, int)), 10, 0, 0);
	else if (specifier == 'x')
		count += print_digit((long)(va_arg(argp, unsigned int)), 16, 0, 0);
	else if (specifier == 'X')
		count += print_digit((long)(va_arg(argp, unsigned int)), 16, 1, 0);
	else if (specifier == 'o')
		count += print_digit((long)(va_arg(argp, unsigned int)), 8, 0, 1);
	else if (specifier == 'u')
		count += print_digit((long)(va_arg(argp, unsigned int)), 10, 0, 0);
	else if (specifier == 'p')
		count += print_pointer(va_arg(argp, void *));
	else
	{
		write(1, "%", 1);
		write(1, &specifier, 1);
		count += 2;
	}
	return (count);
}
