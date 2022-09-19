#include "main.h"

/**
 * puts2 - prints everyother character
 * @str: string to be computed
 * Return: no return for void
 */

void puts2(char *str)
{
	int i, j = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
