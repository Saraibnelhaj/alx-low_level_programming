#include <stdio.h>
#include "lists.h"
/**
 *print_list - Prints all the elements of a list_t list
 *@h: pointer to the head of the list
 *
 *Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current;

	for (current = h; current != NULL; current = current->next)
	{
		if (current->str != NULL)
		{
			size_t i;

			for (i = 0; current->str[i] != '\0'; i++)
			{
				putchar(current->str[i]);
			}
		putchar('\n');
	}
	else
	{
		const char *nil = "(nil)\n";

		while (*nil)
		{
			putchar(*nil++);
		}
	}
	count++;
	}
	return (count);
}
