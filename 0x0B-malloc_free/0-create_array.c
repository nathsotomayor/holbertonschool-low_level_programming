#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - Create an array of chars
 * @size: Size of the array
 * @c: Char of the array
 * Return: 0 success or NULL error
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
