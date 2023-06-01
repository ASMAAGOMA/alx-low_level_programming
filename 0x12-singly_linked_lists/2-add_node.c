#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at
 * the beginning of a list_t list
 * @head: douple pointer indicating to
 * the first node in the linked list
 * @str: the string added to the new node
 * Return: the value of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_copy;

	new_node = malloc(sizeof(list_t));
	if (str == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	str_copy = strdup(str);
	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = str_copy;
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

