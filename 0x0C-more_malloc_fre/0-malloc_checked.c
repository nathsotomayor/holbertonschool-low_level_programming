#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - Allocates memory using 'maloc'
 * @b: Size to memory for p
 * @p
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
