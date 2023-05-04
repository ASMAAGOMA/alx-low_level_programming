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
int i = 0;

while (s[i] != '\0')
{
	i++;
}
int j = 0;

for (j = i - 1; j <= 0; j--)
{
	putchar (s[i]);
}
putchar ('\n');
