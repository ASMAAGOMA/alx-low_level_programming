#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string
 *
 * @str: pointer indicates to the string
 */
void _puts(char *str)
{
	char c = *str;

	while (c != '\0')
	{
		putchar (c);
		c = (*++str);
	}
	putchar ('\n');
}
