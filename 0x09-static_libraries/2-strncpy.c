#include "main.h"
#include <stddef.h>

/**
 *_strncpy - Copies a string up to n bytes
 *@dest: Destination string
 *@src: Source string
 *@n: Maximum number of bytes to copy
 *
 *Return: Pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
