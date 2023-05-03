#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - function that prints a string, in reverse
 * followed by a new line
 *
 *@s: pointer indicates to the string
 */

void print_rev(char *s)
{
	int word = 0;

	int temp;

	while (s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (temp = word; temp > 0; temp++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
