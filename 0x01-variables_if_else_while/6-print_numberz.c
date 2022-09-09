#include <stdio.h>

/**
 *main -main program
 *Return: 0
 */

int main(void)
{
	int a_1;

	for (a_1 = 0; a_1 <= 10; a_1++)
	{
		putchar((a_1 % 10) + '0');
	}

	putchar('\n');

	return (0);
}
