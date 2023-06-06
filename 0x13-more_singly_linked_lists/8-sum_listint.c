#include "lists.h"

/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a listint_t linked list
 * @head: first node in the list
 * Return: result(success)
 */

int sum_listint(listint_t *head)
{
	int result;

	result = 0;
	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
