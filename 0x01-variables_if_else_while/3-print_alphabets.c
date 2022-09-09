#include <stdio.h>

/**
 *main -main program
 *Return: 0
 *
 */

int main(void)
{
	char a_1;
	char a_2;

	for (a_1 = 'a'; a_1 <= 'z'; a_1++)
	{
		putchar(a_1);
	}

	for (a_2 = 'A'; a_2 <= 'Z'; a_2++)
	{
		putchar(a_2);
	}

	putchar('\n');

	return (0);
}
