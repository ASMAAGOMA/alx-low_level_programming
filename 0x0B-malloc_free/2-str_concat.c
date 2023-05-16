#include <strdlib.h>

/**
 * str_concat -  a function that concatenates two strings
 * @s1: the first string
 * @s2: the second strinr
 * Return: the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int j = 0;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	concatenated = malloc((len1 + len2 + 1) * sizeof(char));

	while (s1[len1] != 0)
	{
		len1++;
	}
	while (s2[len2] != 0)
	{
		len2++;
	}
	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (j = 0; j < len1; j++)
	{
		concatenated[i] = s2[j];
	}
	concatenated[i + j] = '\0';

	return (concatenated);
}


