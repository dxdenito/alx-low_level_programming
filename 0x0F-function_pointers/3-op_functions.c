#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add 2 no
 * @a:first no
 * @b: second no
 * Return: a+ b
 */

int op_add(int a, int b)
	return (a + b);

/**
 * op_sub - minus 2 no
 * @a: no 1
 * @b: no 2
 * Return: a - b
 */

int op_sub(int a, int b)
	return (a - b);

/**
 * op_mul - multiply 2 digits
 * @a: no 1
 * @b: no 2
 * Return: a*b
 */

int op_mul(int a, int b)
	return (a * b);

/**
 * op_div - divide 2 no
 * @a: no 1
 * @b: no 2
 * Return: a/b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - get modulus
 * @a: no 1
 * @b: no 2
 * Return: a%b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
