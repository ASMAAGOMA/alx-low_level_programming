#include <stdio.h>

/**
 * main - main function return an integer and take
 * the value of argv and argc
 * Return: always 0
 * @argv: number of arguments
 * @argc: the strings og arguments
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
