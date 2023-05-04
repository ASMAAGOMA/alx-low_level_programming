#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *puts_half - function that prints half of a string, followed by a new line
 *
 *@str: a pointer that indicates to the string
 */

void puts_half(char *str)
{
	int length = 0;
	int start_index = 0;


	while (*str != '\0')
	{
		length++;
		str++;

	}
	start_index = length / 2;

	if (length % 2 == 1)
	start_index += 1;
	while (start_index < length)
	{
		putchar(str[start_index]);
		start_index++;
	}
	putchar('\n');
}

