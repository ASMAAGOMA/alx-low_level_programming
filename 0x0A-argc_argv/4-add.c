#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - the main function
 * @argc: number ofarguments
 * @argv: array of arguments
 * Return: return 0when fail 1 when succes
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (!isdigit(argv[i][j]))
		{
		printf("Error\n");
		return (1);
		}
	}
	result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}

