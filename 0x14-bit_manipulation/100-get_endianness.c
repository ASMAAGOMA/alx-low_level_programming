#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: 1(little), 0(big)
 */

int get_endianness(void)
{
	unsigned int number = 1;
	unsigned char *ptr = (unsigned char *)&number;

	if (*ptr != 0)
		return (1);
	else
		return (0);
}
