#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list
 * @head: first node in the list
 * @n: integer value of the node
 * Return: new_node(success)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}
