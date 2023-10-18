#include "main.h"
/**
 * print_strings - prints a str to stdout
 * @args: variadic arg
 *
 * Return: nothing
 */
int print_str(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		print_char((int)*str);
		++count;
		++str;
	}
	return (count);
}
