#include "main.h"

/**
 * _sqrt_recursion - return the natural squareroot of a number
 * @n: int number
 * Return: if no natural squareroot, -1. natural sqrt otherwise
 */

int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

/**
 * sqrt - helps solve squareroot
 * @c: number to deternine if squareroot
 * @i: incrementer
 * Return: squareroot or -1
 */

int sqrt(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (sqrt(c, i + 1));
	else
		return (-1);
}
