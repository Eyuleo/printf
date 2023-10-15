#include "main.h"
/**
 * _strlen - length of a string
 * @str: pointer to string
 *
 * Return: index
 */
int _strlen(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * _strlenconst - stdout length of a string
 * @str: pointer to a string
 *
 * Return: index
 */
int _strlenconst(const char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		;
	return (i);
}
