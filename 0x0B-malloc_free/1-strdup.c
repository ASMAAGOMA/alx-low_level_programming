#include <stdlib.h>
#include <string.h>

/**
 *_strdup - Duplicates a string.
 *@str: The string to be duplicated.
 *
 *Return: Pointer to the newly allocated duplicated string,
 *or NULL if str is NULL or if memory allocation fails.
 */

char *_strdup(char *str)
{
	int i = 0;
	int length = 0;
	char *duplication;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}

	duplication = malloc((length + 1) * sizeof(char));

	if (duplication == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		duplication[i] = str[i];
	}
	duplication[length] = '\0';

	return (duplication);
}
