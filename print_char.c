#include "main.h"
/**
 * print_char - prints cahr to stdout
 * @c: char to be printed
 *
 * Return: 0 success
 */
int print_char(int c)
{
	return (write(1, &c, 1));
}
