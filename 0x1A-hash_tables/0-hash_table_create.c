#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: the size
 * Return: The new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(size * sizeof(hash_node_t *));
	if (new_table->array == Null)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	new_table->size = size;
	return (new_table);
}
