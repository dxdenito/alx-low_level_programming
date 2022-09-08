#include<stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main -main program
 * Return: 1
 */

int main(void)
{
	char quote [] = "and that piece of art is usefull\" - Dora Korpar,2015-10-19\n"
	int s = strlen(quote);

	write(2, quote, s);

	return (1);
}
