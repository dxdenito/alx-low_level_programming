#include "main.h"

/**
 * swap_int - main
 * @a: pointer
 * @b: pointer
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
