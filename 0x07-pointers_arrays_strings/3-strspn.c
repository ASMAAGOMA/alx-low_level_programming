#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search in.
 * @accept: Pointer to the string containing accepted characters.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s != '\0')
	{
		found = 0;
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		if (!found)
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}
