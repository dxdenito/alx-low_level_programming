#include "main.h"

/**
 * _isdigit - checks if c is digit
 * @c: patrameter to be tested
 * Return: 1 if digit 0 iotherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
