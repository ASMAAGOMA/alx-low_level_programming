#include <stdio.h>
#include "main.h"
#include<stdlib.h>
/**
 * main - the main character
 * @argv: the number of arguments
 * @argc: the array of arguments
 * Return: return 1 or 0
 */
int main(int argc, char *argv[])
{
	int quarters = 0, dimes = 0, nickels = 0, twopences = 0, pinies = 0;
	int cents = 0, int cents = atoi(argv[i]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents >= 25)
	{
		cents -= 25;
		quarters++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		dimes++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		nickels++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		twopences++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		pinies++;
	}
	printf("%d", quarters + dimes + nickels + twopences + pinies);
	return (0);
}
