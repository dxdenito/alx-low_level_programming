#include "main.h"

/**
 *print_alphabet_x10-prints alphabet
 *Return: 0;
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char let;
		
		for (let ='a'; let <= 'z'; let++)
		{
			_putchar (let);
		}
		_putchar('\n');
	}

}
