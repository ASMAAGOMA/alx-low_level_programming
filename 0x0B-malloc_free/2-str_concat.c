#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
