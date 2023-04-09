#include "main.h"
/**
*_sqrt_recursion - Returns the natural square root of a number
*@n: the number to calculate the square root
*
*Return : the square root of n or -1 if n doesn't have a square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	int i = 1;

	while (i * i < n)
		return (i);
	else
		return (-1);
}
