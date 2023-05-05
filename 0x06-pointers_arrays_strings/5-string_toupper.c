#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 **string_toupper - a function that changes all lowercase letters of
 * a string to uppercase
 * @str: the string to be changed
 *Return: the value of str
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}
		ptr++;
	}
	return (str);
}

