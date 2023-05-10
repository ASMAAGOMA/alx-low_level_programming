#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: pointer indicated to the string
 * Return: returns the value of the string lenght
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(char*s + 1));
	}
}

