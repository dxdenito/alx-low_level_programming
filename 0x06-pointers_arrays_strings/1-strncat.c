#include "main.h"

/**
 * *_strncat - function to dispaly n bytes
 * @dest: first string
 * @src: second string
 * @n: number of bytes for second string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] < '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (0);
}
