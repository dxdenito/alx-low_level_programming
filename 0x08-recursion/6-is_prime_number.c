#include "main.h"

/**
 * is_div - checks number if is divisible
 * @num: num to be checked
 * @div: divisor
 * Return: 0 if divible 1 if not
 */

int is_div(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}

	if (div == num / 2)
		return (1);

	return (is_div(num, div + 1));
}

/**
 * is_prime_number- checks if no is prime no
 * @n: no to be checked
 * Return: 0 if not prime 1 otherwise
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (is_div(n, div));
}
