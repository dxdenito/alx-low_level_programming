#include <stdio.h>

/**
 * main - print no of arguments passed
 * @argc: no of argument passed
 * @argv: vector
 * Return: 0;
 */

int main(argc, argv[])
{
	(void) argv;

	printf("%d", argc - 1);

	return (0);
}
