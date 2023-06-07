#include "lists.h"
#include <stdio.h>

size_t count_loop_nodes(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * count_loop_nodes - Counts the number of unique nodes in a looped list.
 * @head: A pointer to the head of the list to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t count_loop_nodes(listint_t *head)
{
	listint_t *slow, *fast;
	size_t node_count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = head->next->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				node_count++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;

			while (slow != fast)
			{
				node_count++;
				slow = slow->next;
			}

			return (node_count);
		}

		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}

/**
 * free_listint_safe - Prints a listint_t list safely.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (nodes);
	nodes = count_loop_nodes(*h);

	if (nodes == 0)
	{
		current = *h;
		while (current != NULL)
		{
			next = current->next;
			printf("Freeing node: %d\n", current->n);
			free(current);
			current = next;
		}
	}
	else
	{
		current = *h;

		while (nodes > 0)
		{
			next = current->next;
			printf("Freeing node: %d\n", current->n);
			free(current);
			current = next;
			nodes--;
		}

		printf("-> [%p] %d\n", (void *)current, current->n);
		free(current);
	}
	*h = NULL;
	return (nodes);
}
