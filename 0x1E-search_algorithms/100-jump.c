#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the jump search algorithm
 * @array: pointer to the first element of the array to search into
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    size_t left = 0, right = 0, step = sqrt(size), i;
    
    if (array == NULL || size == 0)
        return -1;

    while (right < size && array[right] < value)
    {
		printf("Value checked array[%ld] = [%d]\n", right, array[right]);
        left = right;
        right += step;
    }
    
    if (right >= size)
	{
    	right = size - 1;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
    for (i = left; i <= right; i++)
    {
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1;
}
