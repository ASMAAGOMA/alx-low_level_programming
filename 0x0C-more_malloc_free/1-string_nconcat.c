#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the num of bytes
 * Return: the result at the case of success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	int i = 0;
	int j = 0;
	unsigned int result_len = 0;
	char *result;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	result_len = (len1 + (n < len2 ? n : len2));
	result = malloc((result_len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (i = len1, j = 0; i < result_len && j < n; i++, j++)
	{
		result[i] = s2[j];
	}
	result[result_len] = '\0';
	return (result);
}
