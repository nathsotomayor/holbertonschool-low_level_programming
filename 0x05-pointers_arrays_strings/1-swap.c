#include "holberton.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: int
 * @b: int
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
