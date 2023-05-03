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
	char *rev = strrev(s);

	putchar (rev);
	putchar ('\n');
}
