#include "main.h"

/**
 * *_strchr -function to locate string
 *
 * @s: address to string
 * @c: char to be searched
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
