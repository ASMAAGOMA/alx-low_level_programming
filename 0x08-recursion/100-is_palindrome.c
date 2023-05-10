#include <string.h>
#include "main.h"

/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not
 * @s: pointer indicates to the string
 * Return: one or zero
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			return (0);
		}
	}
	return (1);
}
