#include "main.h"

/**
 *print_alphabet-prints alphabet
 *Return: 0;
 */

void print_alphabet(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		_putchar (let);
		let++;
	}
	_putchar('\n');
}
