#include "main.h"
/**
 * print_char - prints cahr to stdout
 * @args: char to be printed
 *
 * Return: 0 success
 */
int print_char(va_list args)
{
	char str;

	str = va_arg(args, int);
	write_string(str);
	return (0);
}
