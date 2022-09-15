#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: parameter to br looped
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n);
	}
}
