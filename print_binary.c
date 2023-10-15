#include "main.h"
/**
 * convert_bin - convert unsigned int to binary
 * @args: num to be converted
 *
 * Return: nothing
 */
int convert_bin(va_list args)
{
	int i = 0, mask = 1, flag = 0, count = 0, cur_bit;
	unsigned int bin = va_arg(args, unsigned int);
	unsigned int temp;

	for (; i < 32; i++)
	{
		temp = ((mask << (32 - i)) & bin);
		if (temp >> (31 - i))
			flag = 1;
		if (flag)
		{
			cur_bit = temp >> (31 - i);
			write_string(cur_bit + '0');
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		write_string('0');
	}
	return (count);
}
