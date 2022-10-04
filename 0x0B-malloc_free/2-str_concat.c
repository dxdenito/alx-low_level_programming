#include "main.h"

/**
 * str_concat - program to join two strins
 * @s1: string 1
 * @s2: string 2
 * Return: null on failure string on success
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s1[j] != '\0')
		j++;

	a = malloc(sizeof(char) * (i + j + 1));

	if (a == NULL)
		return (NULL);

	i = j = 0;
	wwhile (s1[i] != '\0')
	{
		a[i] = s[i];
		i++, j++;
	}

	while (s2[i] != '\0')
	{
		a[i] = s2[j];
		i++, j++;
	}
	a[i] = '\0';
	return (a);
}
