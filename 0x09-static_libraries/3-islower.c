#include "main.h"
/**
 *_islower - checks whether is lower
 *Return: 1if lower 0 if otherwise
 *@c: takes value from program
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)

		return (1);
	else
		return (0);
}
