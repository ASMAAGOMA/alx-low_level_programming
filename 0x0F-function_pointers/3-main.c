#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(success)
 */

int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;

	int (*op_func)(int, int);

	int (*get_op_func(char *s))(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (argc != 4)
	{
		return (98);
		printf("Error");
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		return (99);
		printf("Error");
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		return (100);
		printf("Error");
	}
	result = op_func(num1, num2);
	printf("%d\n", result);
	return (0);
}
