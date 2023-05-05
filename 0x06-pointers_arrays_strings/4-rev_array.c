#include "main.h"
#include <stdio.h>

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: pointer indicates to the array
 * @n: number of integers in array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp = 0;

	for (i = 0; i < j;i i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
