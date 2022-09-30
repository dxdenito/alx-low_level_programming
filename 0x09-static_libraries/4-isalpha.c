#include "main.h"
/**
 *_isalpha - checks whether is lower
 *@c: char to be tested
 *Return: 1if lower 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65  && c <= 90))

		return (1);
	else
		return (0);
}
