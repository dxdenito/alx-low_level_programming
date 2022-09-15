#include "main.h"

/**
 * more_numbers - prints 0-9 10 times
 * Return: is void
 */

void more_numbers(void)
{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
				_putchar(j % 10 + '0');
			j++;
		}
	_putchar('\n');
	}
}
