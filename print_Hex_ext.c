#include "main.h"
/**
 * print_Hex_ext - print hex
 * @num: to be converted
 *
 * Return: count
 */
int print_Hex_ext(unsigned int num)
{
	int n = 0, count = 0;
	int *hex;
	unsigned int temp;

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
