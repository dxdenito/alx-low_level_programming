#include "main.h"

/**
 * _memset - fills memory ith a constant byte
 * @s: memory area
 * @b: char to copy
 * @n: no of b
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

/**
 * *_calloc - allocate memory for array
 * @nmemb : number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
