#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of a linked list.
 *
 * @head: a pointer to the head node of the linked list.
 *
 * Return: the sum of all the data , or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
