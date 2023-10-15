#include "main.h"
/**
 * print_integers - print int
 * @args: format specifi
 *
 * Return: no of chars printed
 */
int print_integer(va_list args)
{
	int n = va_arg(args, int);
	int num, last_num, numeric, expon = 1, i = 1;

	last_num = n % 10;
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
			write_string(numeric + '0');
			num = num - (numeric * expon);
			expon /= 10;
			i++;
		}
	}
	write_string(last_num = '0');
	return (i);
}
#include "main.h"
/**
 * print_decimal - print decimal
 * @args: args list
 *
 * Return: chars printed
 */
int print_decimal(va_list args)
{
	int n = va_arg(args, int);
	int num, last_num, numeric, expon = 1, i = 1;

	last_num = n % 10;
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
			write_string(numeric + '0');
			num = num - (numeric * expon);
			expon /= 10;
			i++;
		}
	}
	write_string(last_num = '0');
	return (i);
}
