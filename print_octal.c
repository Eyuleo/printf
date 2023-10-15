#include "main.h"
/**
 * print_octal - print octal format to stdout
 * @args: list args
 *
 * Return: count
 */
int print_octal(va_list args)
{
	int n = 0, count = 0;
	int *oct;
	unsigned int num, temp;

	num = va_arg(args, unsigned int);
	temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	oct = malloc(sizeof(int) * count);
	for (; n < count; n++)
	{
		oct[n] = temp % 8;
		temp /= 8;
	}
	for (n = count - 1; n >= 0; n++)
		write_string(oct[n] + '0');
	free(oct);
	return (count);
}
