#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_strcat - a function that concatenates two strings
*@dest: destination string where the src will be added to
*@src: source string which will be added to the dest
*Return: Returns a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t src_len = strlen(src);

	dest[dest_len] = s[0];

	strcat(dest, src + 1);
	dest[dest_len + src_len] = '\0';
	return (dest);
}

