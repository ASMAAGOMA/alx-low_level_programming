#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the exponential search algorithm
 * @array: pointer to the first element of the array to search into
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
    size_t high, low, i = 1;

	low = 0;
	high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

    if (high - low <= 0)
    {
        return (-1);
    }

    while (i <= high - low + 1)
    {
        if (array[i] < value)
        {
            i *= 2;
        }
        else
        {
            break;
        }
    }
    return (binary_search(array, size, value));
}