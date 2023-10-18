#include "main.h"
/**
 * print_non_printable_char - prints non printable
 * @c: char
 * @buffer: buffer pointer
 * @bufferIndex: buffer index
 *
 * Return: 4
 */
int print_non_printable_char(unsigned char c, char *buffer, int bufferIndex)
{
	sprintf(buffer + bufferIndex, "\\x%02X", c);
	return (4);
}
/**
 * print_string_with_escape - prints str with escape
 * @str: str pointer
 * @buffer: buff pointer
 *
 * Return: buffer index
 */
int print_string_with_escape(const char *str, char *buffer)
{
	int bufferIndex = 0, i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			buffer[bufferIndex] = str[i];
			bufferIndex++;
		}
		else
			bufferIndex += print_non_printable_char((unsigned char)str[i], buffer, bufferIndex);
	}
	buffer[bufferIndex] = '\0';
	return (bufferIndex);
}
