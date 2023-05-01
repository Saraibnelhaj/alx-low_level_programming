#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: a pointer to the head node of the linked list.
 * @idx: index of the list where the new node should be added.
 * @n: integer to be added as the data of the new node.
 *
 * Return: the address of the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current, *new_node;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
