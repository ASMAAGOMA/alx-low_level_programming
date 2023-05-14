#include "main.h"

/**
 *_strspn - Calculates the length of the initial segment of str1
 *which consists entirely of characters in str2.
 *
 *@str1: The string to be checked.
 *@str2: The characters to check for.
 *
 *Return: The length of the segment.
 */

unsigned int _strspn(char *str1, char *str2)
{
	unsigned int i, j, count = 0;

	for (i = 0; str1[i]; i++)
	{
		for (j = 0; str2[j]; j++)
		{
			if (str1[i] == str2[j])
			{
				count++;
				break;
			}
		}
		if (!str2[j])
			return (count);
	}
	return (count);
}
