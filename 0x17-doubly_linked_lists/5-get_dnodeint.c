#include "lists.h"
/**
 * get_dnodeint_at_index - Write a function that returns
 * the nth node of a dlistint_t linked list.
 * @head: the head of the list
 * @index: the index look for
 * Return: the node if exists
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;
	if (index == 0)
		return (head);
	else
	{

		current = head;

		for (i = 1; i <= index; i++)
		{
			current = current->next;
		}
	}
	return (current);
}
