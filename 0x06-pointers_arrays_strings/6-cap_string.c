#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * *cap_string - a function that capitalizes all words of a string.
 *  @str: the string to be changed
 *  Return: the value of str
 */

char *cap_string(char *str)
{
	int len = strlen(str);
	int i = 0;

	str[0] = toupper(str[0]);
	for  (i = 1; i < len; i++)
	{
		if (isspace(str[i - 1]) || ispunct(str[i]))
		{
			sre[i] = toupper(str[i]);
		}
	}
	return (str);
}

