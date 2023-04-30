#include <stdio.h>
#include "lists.h"
void print_befrore_main(void) __attribute__ ((constructor));
/**
 *print_before_main - function that prints a message before
 *the main function is ex
 *
 *Return: void
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
/**
 *main - main function
 *
 *Return: always 0.
 */
int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature,");
	printf("challenges one to a race.)\n");
	return (0);
}
