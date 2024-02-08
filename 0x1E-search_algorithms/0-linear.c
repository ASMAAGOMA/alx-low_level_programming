#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in a sorted array of integers
 * using the linear_search algorithm
 * @array: pointer to the first element of the array to search into
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
