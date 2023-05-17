#include <stdlib.h>

/**
 *argstostr - Concatenates all the arguments of the program.
 *@ac: The number of arguments.
 *@av: An array of strings containing the arguments.
 *
 *Return: A pointer to the concatenated string, or NULL if it fails.
 *Each argument is separated by a newline character.
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j;

	char *concatenated;

	int index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		total_length++;
	}
	total_length++;
	}
	concatenated = malloc((total_length + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[index] = av[i][j];

			index++;
		}
		concatenated[index] = '\n';
		index++;
	}
	concatenated[index] = '\0';

	return (concatenated);
}
