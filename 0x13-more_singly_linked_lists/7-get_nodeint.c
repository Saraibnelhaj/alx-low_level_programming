#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *
 * @head: a pointer to the head node
 * @index: the index of the node to return, starting at 0
 *
 * Return: a pointer to the nth node of the linked list,
 * or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	while( current && i < index)
	{
	       	current = current->next;
		i++;
	}

	return (current ? current : NULL);
}
