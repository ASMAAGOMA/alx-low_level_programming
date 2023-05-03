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
	int len = 0;

	int i = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	s--;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar('\n');
}
