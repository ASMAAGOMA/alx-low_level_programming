#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - unction that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: the array to search into
 * @size: size of the array
 * @value: value to look after
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (array == NULL)
        return (-1);
    for (i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            printf("Value checked array[%ld] = [%d]\n", i, array[i]);
            return (i);
            break;
        }
        else
        {
            printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        }
    }
    return (-1);
}
