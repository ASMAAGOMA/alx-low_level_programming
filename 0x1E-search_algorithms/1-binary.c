#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: pointer to the first element of the array to search into
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    size_t mid;
    size_t left, right;

    if (array == NULL)
        return (-1);
    right = size - 1;
    left = 0;
    while (left <= right)
    {
        size_t i;

        printf("Searching in array:");
        for (i = left; i <= right; i++)
        {
            if (i != left)
                printf(",");
            printf(" %d", array[i]);
        }
        printf("\n");
        mid = (left + right) / 2;
        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}
