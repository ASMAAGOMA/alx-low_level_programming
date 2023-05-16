#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - a function that concatenates two strings
 * Return: the value of conatenated string
 *@s1: string to be conatenated
 *@s2: string to be conatenated
 *
 */

char *str_concat(char *s1, char *s2);

int main(void)
{
	char *s1 = "Hello, ";
	char *s2 = "world!";

	char *concatenated = str_concat(s1, s2);

	if (concatenated == NULL)
	{
		printf("Failed to allocate memory\n");
		return (1);
	}

	printf("Concatenated string: %s\n", concatenated);

	free(concatenated);
	return (0);
}

/**
 *str_concat - a function that concatenates two strings
 *@s1: string to be conatenated
 *@s2: string to be conatenated
 *Return: the value of conatenated string
 *
 */
char *str_concat(char *s1, char *s2)
{
	size_t s1len = strlen(s1);
	size_t s2len =  strlen(s2);

	char *concatenated = malloc((s2len) + (s1len) + 1 * sizeof(char));

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	if (concatenated == NULL)
	{
		return (NULL);
	}
	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
