#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates
 * memory block using malloc and free
 * @ptr: pointer to the block of memore to be rellocated
 * @old_size: hte old size
 * @new_size: the new size
 * Return: null ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;
	unsigned int i = 0;
	char *p;
	char *np;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	min_size = old_size < new_size ? old_size : new_size;
	p = (char *) ptr;
	np = (char *) new_ptr;
	for (i = 0; i < min_size; i++)
	{
		np[i] = p[i];
		free(ptr);
	}
	return (new_ptr);
}
