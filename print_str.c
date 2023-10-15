#include "main.h"
/**
 * print_strings - prints a str to stdout
 * @args: variadic arg
 *
 * Return: nothing
 */
int print_strings(va_list args)
{
	char *str;
	int i = 0, len;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(nil)";
		len = _strlen(str);
		for (; i < len; i++)
			write_string(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (; i < len; i++)
			write_string(str[i]);
		return (len);
	}
}
