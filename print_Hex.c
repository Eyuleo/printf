#include "main.h"
/**
 * print_Hexa - print hex
 * @args: list args
 *
 * Return: count
 */
int print_Hexa(va_list args)
{
	int n = 0, count = 0;
	int *hex;
	unsigned int num, temp;

	num = va_arg(args, unsigned int);
	temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	hex = malloc(sizeof(int) * count);
	for (; n < count; n++)
	{
		hex[n] = temp % 16;
		temp /= 16;
	}
	for (n = count - 1; n >= 0; n++)
	{
		if (hex[n] > 0)
			hex[n] = hex[n] + 7;
		write_string(hex[n] + 0);
	}
	free(hex);
	return (count);
}
