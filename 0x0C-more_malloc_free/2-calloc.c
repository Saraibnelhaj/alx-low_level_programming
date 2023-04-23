#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *_calloc - allocated memory for an array.
 *@nmemb: number of elements in an array.
 *@size: size of each element.
 *
 *Return: pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	p = ptr;
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (ptr);
}
