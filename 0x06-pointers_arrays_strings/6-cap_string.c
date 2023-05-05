#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * *cap_string - a function that capitalizes all words of a string.
 *  @str: the string to be changed
 *  Return: the value of str
 */

char *cap_string(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (toupper(*ptr))
		{
			*ptr = islower(*ptr);
		}
		ptr++;
	}
	return (str);
}

