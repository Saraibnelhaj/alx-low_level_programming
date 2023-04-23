#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *string_nconcat - concatenates two stings.
 *
 *@s1: the first string to be concatenated.
 *@s2: The second string to be concatenated.
 *@n: The maximum number of bytes of s2 to concatenate to s1.
 *
 *Return: On success, a pointer to the concatenated string.
 *If the function fails,return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;
	len = len1 + n;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	memcpy(concat, s1, len1);
	memcpy(concat + len1, s2, n);

	concat[len] = '\0';

	return (concat);
}
