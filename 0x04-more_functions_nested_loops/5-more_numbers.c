#include "main.h"

/**
 * more_numbers - prints 0-9 10 times
 * Return: is void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar(i / 10 + '0');
			}
				_putchar(i % 10 + '0');
			i++
		}
		_putchar('\n');
	}
}
