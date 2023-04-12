#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *create_array: entry point
 *@size: size of the array
 *@c: character to assign
 *return: a pointer to the array, otherwise NULL (if it fails)
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}

