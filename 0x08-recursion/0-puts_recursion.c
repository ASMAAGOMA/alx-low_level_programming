#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: pointer indicates to the string
 * Return: always (0)
 */

void _puts_recursion(char *s)
{
	if (s == '\0')
	{
		putchar ('\n');
		return;
	}
	putchar (*s);
	_puts_recursion(s + 1);
}
