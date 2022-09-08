#include <stdio.h>

/**
 * main - main program
 * Return: 0
 */

int main(void)
{
	char char_1;
	int int_1;
	long int long_int;
	long long int long_long_int;
	float float_1;

	printf("Size of a char: %lu byte(s)\n", sizeof(char_1));
	printf("Size of an int: %lu byte(s)\n", sizeof(int_1));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long_int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long_long_int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float_1));

	return (0);
}

