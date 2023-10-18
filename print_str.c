#include "main.h"
/**
 * print_str - prints a str to stdout
 * @str: string
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
