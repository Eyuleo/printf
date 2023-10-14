#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: a character string
 *
 * Return: character
 */
int _printf(const char *format, ...)
{
	int chars_printed = 0, len = 0;
	char c;
	char *str;
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
			if (*format == 'c')
			{
				c = va_arg(args, int);
				write(1, &c, 1);
				chars_printed++;
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				while (str[len] != '\0')
					len++;
				write(1, str, len);
				chars_printed += len;
			}
			else if (*format == '%')
			{
				write(1, format, 1);
				chars_printed++;
			}
		}
		format++;
	}
	va_end(args);
	return (chars_printed);
}
