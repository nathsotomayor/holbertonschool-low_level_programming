#include "holberton.h"
#include <stdlib.h>

/**
 * *_memcpy - Copies memory area
 * @src: Pointer to memory area
 * @dest: Pointer where copy memory area from src
 * @n: Bytes of the memory area
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		dest[l] = src[l];
	}

	return (dest);
}

/**
 * *_calloc - Allocates memory for an array using 'maloc'
 * @nmemb: Numbers of elements
 * @size: Size of data type
 * Return: Pointer to allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *dest_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		dest_ptr = malloc(new_size);

		if (!dest_ptr)
			return (NULL);

		return (dest_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	dest_ptr = malloc(new_size);

	_memcpy(dest_ptr, ptr, old_size);
	free(ptr);

	return (dest_ptr);
}
