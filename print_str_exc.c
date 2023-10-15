#include "main.h"
/**
 * print_str_exc - handle non printable chars
 * @args: list of args
 *
 * Return: chars
 */
int print_str_exc(va_list args)
{
	char *str;
	int i = 0, val, length = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	for (; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			write_string('\\');
			write_string('x');
			length += 2;
			val = str[i];
			if (val < 16)
			{
				write_string('0');
				length++;
			}
			length = length + print_Hex_ext(val);
		}
		else
		{
			write_string(str[i]);
			length++;
		}
	}
	return (length);
}
