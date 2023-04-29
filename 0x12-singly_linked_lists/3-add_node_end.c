#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *add_node_end - adds a new node at the end of a list_t list
 *@head: pointer to the head of the list
 *@str: string to be added to the new node
 *
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = 0;
	while (new_node->str[new_node->len])
		new_node->len++;

	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
