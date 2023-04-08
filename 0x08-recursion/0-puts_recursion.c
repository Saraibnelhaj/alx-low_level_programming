#include "main.h"
/**
 *print_with_newline-prints a string followed by a new line
 *@string:the string to print
 *
 *Return:void
 */
void print_with_newline(char *string)
{
	if (*string)
	{
		_putchar(*string);
		_print_with_new_line(string + 1);
	}
	else
		_putchar('\n');
}
