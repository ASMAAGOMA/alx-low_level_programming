#include "lists.h"
/**
 * sum_dlistint - the sum of
 * all the data (n) of a dlistint_t linked list
 * @head: the head of the function
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
