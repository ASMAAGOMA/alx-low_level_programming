#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: the value of integer nu  to be flipped
 * @m: the value of integer nu  to be flipped
 * Return: the value of count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = m ^ n;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		if ((xor_result & 1) != 0)
			count++;
		xor_result >>= 1;
	}
	return (count);
}
