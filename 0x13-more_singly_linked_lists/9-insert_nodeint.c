#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position
 * @head: first node of the list
 * @idx: the index of the list where the new node
 * should be added. Index starts at 0
 * @n: integer value of the node
 * Return: new_vde(success)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	unsigned int count;
	listint_t *new_node;

	count = 0;
	if (head == NULL)
		return (NULL);
	if (idx == 0)
		return (add_nodeint_end(head, n));
	current = *head;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL || count == 0)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
