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
	void *ptr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
		exit(EXIT_FAILURE);
	}
	memset(ptr, 0, size * nmemb);

	return (ptr);
}

