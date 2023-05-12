#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - the main function
 *@argc: number of argument
 *@argv: array of arguments
 *Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
