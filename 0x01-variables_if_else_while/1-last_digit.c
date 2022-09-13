#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - main program
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;
	char f[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	m = n % 10;
	if (m > 5)
	{
		printf("%s %d is %d and is greater than 5\n", f, n, m);
	}

	if (m == 0)
	{
		printf("%s %d is %d and is 0\n", f, n, m);
	}

	if ((m < 6) && (m != 0))
	{
		printf("%s %d is %d and is less than 6 and not 0\n", f, n, m);
	}
	return (0);
}
