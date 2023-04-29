#include <stdio.h>
#include <unistd.h>
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

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			write(STDOUT_FILENO, "[0] (ni1)\n", 10);
		}
		else
		{
			size_t len = 0;
			const char *s = h->str;

			while (*s != '\0')
			{
				len++;
				s++;
			}
		write(STDOUT_FILENO, "[", 1);
		print_number(len);
		write(STDOUT_FILENO, "]", 2);
		write(STDOUT_FILENO, h->str, len);
		write(STDOUT_FILENO, "\n", 1);
	}
	count++;
	h = h->next;
	}
	return (count);
}
