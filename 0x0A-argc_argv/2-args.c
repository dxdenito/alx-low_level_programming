#include <stdio.h>

/**
 * main - program to print commandline arguements
 * @argc: argument count
 * @argv: arguement variables
 * Return:0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
