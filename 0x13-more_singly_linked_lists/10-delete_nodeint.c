#include "lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index - function that deletes the
 *node at index index of a listint_t linked list
 *@head: first node in the list
 *@index:  is the index of the node that should be
 *deleted. Index starts at 0
 *Return: 1(success), -1(fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;
	if (current == NULL || current->next == NULL)
		return (-1);
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
