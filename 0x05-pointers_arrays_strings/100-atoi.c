#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi -  convert a string to an integer
 * @s: string
 * Return: result * sign
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

	while (*s && (*s >= '0' && *s <= '9'))
	{

		int digit = *s - '0';

		if (result > (INT_MAX - digit) / 10)
		{

			return ((sign == 1) ? INT_MAX : INT_MIN);
		}
		result = result * 10 + digit;
		s++;
	}

	return (result * sign);
}
