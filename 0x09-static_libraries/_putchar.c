#include <unistd.h>
/**
 *_putchar - write the character c to stdout
 *@c: The character to print
 *
 *Return: On success 1.
 *when there is an error, -1 is returnes 
 */
int _putchar(char c)
{
	return (write(1, &c,1));
}
