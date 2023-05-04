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
	int len = strlen(str);
	int mid = 0;
	int i = 0;

		if (len % 2 == 1)
			mid = (len - 1) / 2;
		else
			mid = len / 2;
		while (*str != '\0')
		{
			i++;
		for (i = mid; i < len; i++)
		{
			putchar (str[i]);
		}
		putchar ('\n');
		}
}
