#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * free_listint - function that frees a listint_t list
 * @head: the first node in the list
 */

void free_listint(listint_t *head)
{
	listint_t *next;
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
