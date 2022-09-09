#include <stdio.h>

/**
 *main -main program
 *Return: 0
 */

int main(void)
{
	int a_1;
	char a;

	for (a_1 = 0; a_1 <= 10; a_1++)
	{
		putchar(a_1 + '0');
	}
	for (a = 'a'; a < 'g'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
