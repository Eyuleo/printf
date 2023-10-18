#include "main.h"
/**
 * print_binary - handles %b specifier
 * @n: num to be converted
 *
 * Return: count
 */
int print_binary(unsigned int n)
{
	int count = 0;
	int i = 31;
	char bit;

	for (; i >= 0; i--)
	{
		bit = (n & (1 << i)) ? '1' : '0';
		count += print_char(bit);
	}
	return (count);
}
