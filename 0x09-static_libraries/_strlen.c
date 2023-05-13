#include "main.h"
/**
 *_strlen - computes the length of a string
 *
 *@s: string to compute length of
 *
 *Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
