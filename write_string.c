#include "main.h"
/**
 * write_string - writes the character to stdout
 * @str: The str to print
 *
 * Return: nothing
 */
int  write_string(char str)
{
	return (write(1, &str, 1));
}
