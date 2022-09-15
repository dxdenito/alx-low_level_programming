#include "main.h"

/**
 * print_square - print square
 * @n: number to be compute
 * Return: void
 */

void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
