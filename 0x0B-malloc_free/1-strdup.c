#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - returns a pointer to a newly allocated space in memory
*containing a copy of the string given as a parameter .
*@str: string to duplicate
*
*Return: pointer to duplicated string or NULL if insufficient memory
*was available
*/
char *_strdup(char *str)
{
	char *dup;
	int i, size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size])
		size++;
	dup = malloc(sizeof(char) * (size + 1));

	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		dup[i] = str[i];
	return (dup);
}

