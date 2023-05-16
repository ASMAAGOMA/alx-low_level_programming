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
	size_t stringlen = strlen(str);

	char *duplication = malloc((stringlen + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (duplication == NULL)
	{
		return (NULL); 
	}
	strcpy(duplication, str);

	return (duplication);
}
