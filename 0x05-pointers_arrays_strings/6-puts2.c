#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 -  function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: pointer that indicates to the string
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;
	char *s = str;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	for (i = 0; i <= len; i += 2)
	{
		putchar(str[i]);
	}
	putchar ('\n');
}
