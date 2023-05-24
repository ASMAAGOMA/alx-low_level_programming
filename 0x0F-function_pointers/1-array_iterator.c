#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  a function that executes a function given as
 * a parameter on each element of an array
 * @array: array of elements
 * @size:size of the array
 * @action: function given as a parameter on each element of an array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

