#include "main.h"

/**
 *_strspn - Calculates the length of the initial segment of str1
 *which consists entirely of characters in str2.
 *
 *@s: The string to be checked.
 *@accept: The characters to check for.
 *
 *Return: The length of the segment.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (!accept[j])
			return (count);
	}
	return (count);
}
