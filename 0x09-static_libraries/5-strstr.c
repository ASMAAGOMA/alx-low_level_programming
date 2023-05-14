#include "main.h"

/**
 *_strstr - Locate a substring
 *@haystack: The string to search
 *@needle: The substring to search for
 *
 *Return: Pointer to the beginning of the located substring,
 *or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *start_haystack, *start_needle;

	while (*haystack)
	{
		start_haystack = haystack;
		start_needle = needle;

		while (*start_haystack && *start_needle && *start_haystack == *start_needle)
		{
			start_haystack++;
			start_needle++;
		}

		if (!*start_needle)
			return (haystack);

		haystack++;
	}

	return (NULL);
}
