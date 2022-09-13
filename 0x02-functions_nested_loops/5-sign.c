#include "main.h"

/**
 * print_sign- function to printsign
 * @n: parameter to be tested
 * Return: 0 if 0, 1 if greater than 0 and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
