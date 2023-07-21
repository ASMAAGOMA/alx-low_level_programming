#include "lists.h"
/**
 * insert_dnodeint_at_index - add node at index
 * @h: the head of nide
 * @idx: the index to add the node at
 * @n: the value of the index
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *tmp;
	size_t count;

	count = 0;
	tmp = *h;
	if (*h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (count = 0; count < idx - 1 && tmp != NULL; count++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->prev = tmp;
	new_n->next = tmp->next;
	new_n->next->prev = new_n;
	tmp->next = new_n;
	return (new_n);
}