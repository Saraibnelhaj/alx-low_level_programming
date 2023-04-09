#include "main.h"
#include <stdio.h>
/**
 *_puts_recursion-prints a string followed by a new line
 *@string:the string to print
 *
 *Return:void
 */
void _puts_recursion(char *string)
{
	if (*string)
	{
		_puts_recursion(string + 1);
	}
	else
		_putchar('\n');
}
