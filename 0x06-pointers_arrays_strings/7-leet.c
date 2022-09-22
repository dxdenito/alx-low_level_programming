#include "main.h"

/**
 * leet - encodes a streeng to leet
 *
 * @s: input
 *
 * Return: pointer s
 */

char *leet(char *s)
{
	int i, j;

	char b[] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == b[j] || s[i] - 32 == b[j])
			{
				s[i] = j + '0';
			}
		}
	}
	return (s);
}
