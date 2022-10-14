#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - print string
 * @separator: separator
 * @n: integer
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list li;
	unsigned int i;
	char *str;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(li, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", separator);
	}
	printf("\n");
	va_end(li);
}
