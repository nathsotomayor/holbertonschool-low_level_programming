#include "3-calc.h"

/**
 * op_add - Sum a and b
 * @a: Integer to sum
 * @b: Integer to sum
 * Return: Sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Difference between a and b
 * @a: Integer to sub
 * @b: Integer to sub
 * Return: Sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply a and b
 * @a: Integer to multiplies
 * @b: Integer to multiplies
 * Return: Multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide a and b
 * @a: Integer to divide
 * @b: Integer to divide
 * Return: Division
 */
int op_div(int a, int b)
{
	if (b <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Module of a and b
 * @a: Integer to operate
 * @b: Integer to operate
 * Return: Remainder of the division
 */
int op_mod(int a, int b)
{
	if (b <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
