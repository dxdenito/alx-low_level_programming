#include <stdio.h>
/**
 * main - main program
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch == 'e') || (ch == 'q'))
		{
			continue;
		}
		putchar(ch);
	}
	return (0);
}