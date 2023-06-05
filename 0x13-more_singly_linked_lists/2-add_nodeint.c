#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a listint_t list
 * @head: first node of the list
 * @n: integer value of the node
 * Return: new_node(success)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
