#include "main.h"

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: result(success)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	size_t stringlen = strlen(b);
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; i < stringlen; i++)
	{
		if (b[i] == '0')
			result = (result << 1) + 0;
		else if(b[i] == '1')
			result = (result << 1) + 1;
		else
			return (0);
	}
	return (result);
}
