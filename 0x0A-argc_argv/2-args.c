#include "main.h"
#include <stdio.h>

/**
 * main - the main function
 * @argc: number of argument
 * @argv: array of arguments
 * Return: always 0 (success)
 */

int main (int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i])
	}
	return (0)
}
