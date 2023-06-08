#include "main.h"

/**
 * get_bit - function that returns the value
 * of a bit at a given index
 * @index: is the index, starting from
 * 0 of the bit you want to get
 * @n: the value of the index
 * Return: the value of the bit at index index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n & mask) != 0);
}
