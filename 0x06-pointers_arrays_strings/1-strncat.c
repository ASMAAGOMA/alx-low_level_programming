#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - a function that concatenates two strings
 * @dest: a pointer indicates to the destination string
 * @src: a pointer indicates to the source string
 * @n: bytes number
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	size_t src_len = strnlen(src, n);

	memcpy(dest + dest_len, src, src_len);
	dest[dest_len + src_len] = '\0';
	return (dest);
}
