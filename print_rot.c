#include "main.h"
/**
 * print_rot13 - encodes a string using rot13
 * @args: list of args
 *
 * Return: count
 */
int print_rot13(va_list args)
{
	int i, j, k, count = 0;
	char *str;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotated[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	for (i = 0; str[i]; i++)
	{
		k = 0;
		for (j = 0; alpha[j] && !k; j++)
		{
			if (str[i] == alpha[j])
			{
				write_string(rotated[j]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			write_string(str[i]);
			count++;
		}
	}
	return (count);
}
