#include <stdio.h>
#include "main.h"

/**
 * main - the main function
 * @argc: number of argument
 * @argv: array of arguments
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
