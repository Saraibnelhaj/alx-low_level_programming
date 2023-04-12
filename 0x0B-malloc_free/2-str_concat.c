#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*str_concat - concatenates two strings
*@s1: first string
*@s2: second string
*
*Return: pointer to newly allocated space in memory containing concatenated
*strings, or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1]; len1++);

	for (len2 = 0; s2[len2]; len2++);

	concat_str = malloc((len1 + len2 + 1) *  sizeof(char));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[i] = s1[i];
	for (j = 0; s2[j]; j++)
		concat_str[i + j] = s2[j];
	concat_str[i + j] = '\0';

	return (concat_str);
}

