#include "main.h"
#include <stdio.h>
/**
 * _stelen_recursion-returns the length of a string
 * @s:the string that we want to measure
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
