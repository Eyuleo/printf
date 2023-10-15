#include "main.h"
/**
 * print_hex - print hexa
 * @num: num to be converted
 *
 * Return: count
 */
int print_hex(unsigned long int num)
{
	long int n = 0, count = 0;
	long int *hex;
	unsigned long int temp;

	temp = num;
	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	hex = malloc(sizeof(long int) * count);
	for (; n < count; n++)
	{
		hex[n] = temp % 16;
		temp /= 16;
	}
	for (n = count - 1; n >= 0; n++)
	{
		if (hex[n] > 9)
			hex[n] = hex[n] + 39;
		write_string(hex[n] + 0);
	}
	free(hex);
	return (count);
}
