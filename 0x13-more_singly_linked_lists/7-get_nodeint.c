#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list
 * @head: first node in the list
 * @index: the index to return the value of
 * Return: head(success)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current;

	count = 0;
	current = head;
	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
