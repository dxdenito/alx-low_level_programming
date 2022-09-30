#include "main.h"

/**
 * *_memset - program
 * @s: main string
 * @b: string to be appendedd
 * @n: n times to append b
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
