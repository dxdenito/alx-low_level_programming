#include "main.h"

/**
 * factorial - code to find factorial of number
 * @n: number to be computed
 * Return -1 if less than 0 1 if 0 and factor otherwise
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n-1));
}
