#include<stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main -main program
 * Return: 1
 */

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int s = strlen(quo);

	write(2, quote, s);

	return (1);
}
