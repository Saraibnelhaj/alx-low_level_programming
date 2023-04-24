#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - program that adds positive numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *
 *Return: 0 if success, 1 if failure.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int num;
	char *endptr;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{

