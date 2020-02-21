#include "holberton.h"

/**
 * reverse_array - Reverses the content of an array of integersg
 * @a: int
 * @n: int
 * @tmp
 * Return: int
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	n--;

	for (i = 0; i < n; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
