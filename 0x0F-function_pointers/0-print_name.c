#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: persons name
 * @f pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
