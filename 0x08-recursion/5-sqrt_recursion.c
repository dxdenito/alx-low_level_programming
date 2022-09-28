#include "main.h"

/**
 * _sqrt_recursion - return the natural squareroot of a number
 * @n: int number
 * Return: if no natural squareroot, -1. natural sqrt otherwise
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - helps solve squareroot
 * @c: number to deternine if squareroot
 * @i: incrementer
 * Return: squareroot or -1
 */

int _sqrt(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (_sqrt(c, i + 1));
	else
		return (-1);
}
