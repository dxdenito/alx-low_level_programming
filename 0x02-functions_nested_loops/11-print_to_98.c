#include "main.h"

/**
 * print_to_98 - print all to 98
 * @n: - parameter to start
 * Return: 0
 */

int print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);

			printf("%d\n", n);
	}
	else
	{
		printf("%d, ", n++);

		printf("%d\n", n);
	}
}