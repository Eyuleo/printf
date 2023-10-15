#include "main.h"
/**
 * print_pointer - print pointer
 * @args: list of args
 *
 * Return: hex value
 */
int print_pointer(va_list args)
{
	void *ptr;
	char *str = "(nil)";
	int i = 0, val;
	long int cast;

	ptr = va_arg(args, void *);
	if (ptr == NULL)
	{
		for (; str[i] != '\0'; i++)
			write_string(str[i]);
		return (i);
	}
	cast = (unsigned long int)ptr;
	write_string('0');
	write_string('x');
	val = print_hex(cast);
	return (val + 2);
}
