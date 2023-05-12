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
	printf("%d\n"__attribute__((unused)), argc - 1);
	return (0);
}
