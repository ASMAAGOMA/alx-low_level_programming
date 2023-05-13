#include <stdio.h>
#include "main.h"
#include<stdlib.h>

/**
 *count_coins - function to count coins
 *@cents: cent number
 *@coin_value: coin value
 *Return: count value
 */

int count_coins(int cents, int coin_value)
{
	int count = 0;

	while (cents >= coin_value)
	{
		cents -= coin_value;
		count++;
	}
	return (count);
}

/**
 * main - the main character
 * @argv: the number of arguments
 * @argc: the array of arguments
 * Return: return 1 or 0
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins += count_coins(cents, 25);
	coins += count_coins(cents, 10);
	coins += count_coins(cents, 5);
	coins += count_coins(cents, 2);
	coins += count_coins(cents, 1);

	printf("%d\n", coins);
	return (0);

}
