#include "main.h"
/**
 * print_revstr - print string in reverse
 * @args: list of args
 *
 * Return: reversed string
 */
int print_revstr(va_list args)
{
	int i, j = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	while (str[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		write_string(str[j]);
	return (j);
}
