#include <stdio.h>
#include "main.h"
#include <string.h>

/**
*_strcpy -  copies the string pointed to by src, including the terminating
*null byte to the buffer pointed to by dest
*@dest: is apointer indicates to the buffer wherethe string is coppied
*@src: is apointer indicates to the buffer containes the string to be coppied
*Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	size_t i = 0;

	size_t len = strlen(src);

	memest(dest, 0, len + 1);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
