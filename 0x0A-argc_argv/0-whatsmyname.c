#include <stdio.h>
#include "main.h"
/**
 *main - prints the name of the program followed by a new line
 *@argv: array of arguments
 *@argc: number of arguments
 *
 *Return: always 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
