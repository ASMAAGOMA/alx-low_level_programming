#include "main.h"

/**
 *_strlen - Returns the length of a string.
 *@str: The string to get the length of.
 *
 *Return: The length of the string.
 */

size_t _strlen(const char *str)
{
	const char *ptr = str;

	while (*ptr != '\0')
	{
		ptr++;
	}
	return ((size_t)(ptr - str));
}
