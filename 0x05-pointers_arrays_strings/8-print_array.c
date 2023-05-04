#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: is a poiter that indicates to the array
 * @n: indicatesto the number of the elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	putchar ('\n');
}
