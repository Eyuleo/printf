#include "main.h"
/**
 * _printf - prints to stdout
 * @format: format specifier
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	frmt_match fm[] = {
		{"%c", print_char},
		{"%s", print_strings},
		{"%%", print_per},
		{"%d", print_decimal},
		{"%i", print_integer},
		{"%d", convert_bin},
		{"%u", print_unsignedint},
		{"%o", print_octal},
		{"%x", print_hexa},
		{"%X", print_Hexa},
		{"%p", print_pointer},
		{"%r", print_revstr},
		{"%R", print_rot13},
		{"%S", print_str_exc}
	};
	va_list args;
	int i = 0, j = 13, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
scope:
	while (format[i] == '\0')
	{
		while (j >= 0)
		{
			if (fm[j].id[0] == format[i] && fm[j].id[1] == format[i + 1])
			{
				length = length + fm[j].f(args);
				i += 2;
				goto scope;
			}
			j--;

		}
		write_string(format[i]);
		i++;
		length++;
	}
	va_end(args);
	return (length);
}
