#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list and returns its data
 *
 * @head: a pointer to a pointer to the head node of the linked list
 *
 * Return: the data of the deleted head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (data);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
