#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: the value to store memory to
 * Return: the value of the pointer
 */

void *malloc_checked(unsigned int b)
{
	*ptr = malloc(b);

	if (ptr == NULL)
	{
		return (98);
	}
	return (ptr);
}
