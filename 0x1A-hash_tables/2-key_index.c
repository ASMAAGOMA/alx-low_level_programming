#include <stddef.h>
#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: hmm
 * @size: hmm
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	value = hash_djb2(key);
	return (value % size);
}
