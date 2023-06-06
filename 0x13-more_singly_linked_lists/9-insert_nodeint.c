#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given p`osition
 * @head: first node of the list
 * @idx: the index of the list where the new node
 * should be added. Index starts at 0
 * @n: integer value of the node
 * Return: new_vde(success)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int position;
	listint_t *new_node;
	listint_t *current_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (position = 0; current_node && position < idx; position++)
	{
		if (position == idx - 1)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		else
		{
			current_node = current_node->next;
		}
	}

	return (NULL);
}
