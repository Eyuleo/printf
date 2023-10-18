#include "main.h"
/**
 * print_pointer - print pointer
 * @ptr: pointer to be printed
 *
 * Return: buffer
 */
int print_pointer(void *ptr)
{
	char buffer[20];

	snprintf(buffer, sizeof(buffer), "%p", ptr);
	return (print_str(buffer));
}
