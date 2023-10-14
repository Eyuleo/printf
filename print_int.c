#include "main.h"
/**
 * print_int - print integers 
 * @format: format specifier
 *
 * Return: chars printed
 */
int print_int(const char *format, ...)
{
	int chars_printed = 0, len, int_val;
	char buffer[12];
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '\0')
			break;
		if (*format != '%')
		{
			write(1, format, 1);
			chars_printed++;
		}
		else
		{
			format++;
			if (*format == 'd'|| *format == 'c')
			{
				int_val = va_arg(args, int);
				write(1, int_val, strlen(int_val));
				cahrs_printed++;
			}
			else if(*format == '%')
			{
				write(1, format, 1);
				cahrs_printed++;
			}
		}
		format++;
	}
	va_end(args);
	return (chars_printed);
}

