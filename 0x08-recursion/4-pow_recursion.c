#include "main.h"

/**
 * _pow_recursion - return x to power of y
 * @x: number to be powered
 * @y: number to power
 * Return: power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, y - 1));
}
