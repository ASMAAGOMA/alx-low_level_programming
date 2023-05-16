#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: a copy of the string
 * Return: the value of a copy of the string
 */

char *_strdup(char *str)
{
	int srtinglen = strlen(str);
	char *duplication;

	if (str == NULL)
	{
		return (NULL);
	}
	duplication = malloc((stringlen + 1) * sizeof(char));
	if (duplication == NULL)
	{
		return (NULL);
	}
	strcpy (duplication, str);
	return (duplication);
}
