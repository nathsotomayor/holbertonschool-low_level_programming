#include "holberton.h"
#include <stdlib.h>

/**
 * *_memset - Fills memory with a constant byte
 * @s: Pointer to memory area
 * @b: Constant byte
 * @n: First bytes of the memory area pointed to by s
 * Return: Pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n ; l++)
	{
		s[l] = b;
	}

	return (s);
}

/**
 * *_calloc - Allocates memory for an array using 'maloc'
 * @nmemb: Numbers of elements
 * @size: Size of data type
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	array = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (!array)
		return (NULL);

	_memset(array, 0, size * nmemb);

	return (array);
}
