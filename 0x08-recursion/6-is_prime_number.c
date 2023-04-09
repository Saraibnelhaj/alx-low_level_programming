#include "main.h"
/**is_prime_number: write a function that returns 1 
 *if the input integer is a prime number, otherwise returns 0
 *
 *@n: the number to check
 *
 * Return: 1 if the number is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	/*chekc if the number is divisible by 2 or 3 */
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	/* chekc if the number is divisible by any number greater than 3*/
	int i = 5;

	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);

		i += 6;
	}
	return (1);
}
