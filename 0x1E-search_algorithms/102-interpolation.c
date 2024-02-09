#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the interpolation search algorithm
 * @array: pointer to the first element of the array to search into
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t high, low, pos;

	low = 0;
	high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	pos = low + (((double)(high - low)
	/ (array[high] - array[low])) * (value - array[low]));

	if (array == NULL || value < array[low] || value > array[high])
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	while (low <= high)
	{
		pos = low + (((double)(high - low)
		/ (array[high] - array[low])) * (value - array[low]));

		if (array[pos] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return (pos);
		}
		else if (value > array[pos])
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			low = pos + 1;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			high = pos - 1;
		}
	}
	return (-1);
}
