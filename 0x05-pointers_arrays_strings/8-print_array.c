#include "holberton.h"

/**
 * print_array - Prints a string
 * @a: Array of integers
 * @n: Numbers of elements of array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%i",a[i]);
		else	
			printf("%i, ",a[i]);
	}
	printf("\n");
}
