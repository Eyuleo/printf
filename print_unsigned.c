#include "main.h"
/**
 * print_unsignedint - print unsigned int
 * @args: list of args
 *
 * Return: no of chars printed
 */
int print_unsignedint(va_list args)
{
	unsigned int n = 0;

	int num, last_num, numeric, expon = 1, i = 1;

	last_num = n % 10;

	va_arg(args, unsigned int);

	n = n / 10;
	num = n;

	if (last_num < 0)
	{
		write_string('-');
		num = -num;
		last_num = -last_num;
		n = -n;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			expon = expon * 10;
			num = num / 10;
		}
		num = n;
		while (expon > 0)
		{
			numeric = num / expon;
			numeric = numeric + '0';
			write_string(numeric);
			num = num - (numeric * expon);
			expon /= 10;
			i++;
		}
	}
	last_num = '0';
	write_string(last_num);
	return (i);

}
