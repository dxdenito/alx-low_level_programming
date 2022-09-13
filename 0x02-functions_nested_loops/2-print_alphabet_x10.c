#include "main.h"

/**
 *print_alphabet_x10-prints alphabet
 *Return: 0;
 */

void print_alphabet_x10(void)
{
	char let = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (let <= 'z')
		{
			_putchar (let);
			let++;
		}
		_putchar('\n');
	}

}
