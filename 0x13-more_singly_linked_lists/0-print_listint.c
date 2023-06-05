#include "lists.h"
#include <stdio.h>
#include <stddef>

/**
 * print_listint - function that prints all
 * the elements of a listint_t list
 * @h: the first node in the list
 * Return: the valye of count
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++
	}
		return (count);
}
