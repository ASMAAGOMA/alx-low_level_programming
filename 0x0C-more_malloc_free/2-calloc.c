#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc -  a function that allocates memory for an array
 * using malloc
 * @nmemb: an array
 *@size: size of an array
 *Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = nmemb * size;
	unsigned int i = 0;
	void *ptr = NULL;
	char *char_ptr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	char_ptr = (char *)ptr;
	for (i = 0; i < total_size; i++)
	{
		char_ptr[i] = 0;
	}

	return (ptr);
}

