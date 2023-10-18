#include "main.h"
/**
 * print_digit - print digit
 * @n: num to print
 * @base: base specifier
 *
 * Return: count
 */
int print_digit(long n, int base, int is_uppercase, int is_octal)
{
	int count;
	char *symbols;

	symbols = is_uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

	if (n < 0)
	{
		write(1, "-", 1);
		return(print_digit(-n, base, is_uppercase, is_octal) + 1);
	}
	else if (n < base)
		return(print_char(symbols[n]));
	else
	{
		count = print_digit(n / base, base, is_uppercase, is_octal);
		if (is_octal)
			return (count + print_digit(n % base, base, is_uppercase, is_octal));
		return(count + print_digit(n % base, base, is_uppercase, is_octal));
	}
}
