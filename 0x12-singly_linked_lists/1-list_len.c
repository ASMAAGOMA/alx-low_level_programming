#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - function that returns the number
 * of elements in a linked list_t list
 * @h: first node in the linked list
 * Return: the vulue of count(success)
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
