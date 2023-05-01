#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: a pointer to the head pointer of the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head != NULL)
		return;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
