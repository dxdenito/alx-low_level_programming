#include "main.h"

/**
 * print_numbers -prints numbers from 0-9
 * Return: nothing
 */

void print_numbers(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
