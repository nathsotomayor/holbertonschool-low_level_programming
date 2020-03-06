#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - Creates an array of integers
 * @min: First value
 * @max: Last value
 * Return: Pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = ((max - min) + 1);

	array = malloc(size * sizeof(int));

	if (!array)
		return (NULL);

	for (i = 0; i < size; i++, min++)
	{
		array[i] = min;
	}

	return (array);
}
