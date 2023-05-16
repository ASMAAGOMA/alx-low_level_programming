#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char
 * @size: the size of the string
 * @c: the string
 * Return: the value of the array
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	char *array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
}
