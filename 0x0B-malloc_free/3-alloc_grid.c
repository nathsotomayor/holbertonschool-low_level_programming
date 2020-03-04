#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of matrix
 * @height: height of matrix
 *
 * Return: pointer to pointer to int
 */
int **alloc_grid(int width, int height)
{
	int **array, x, y, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(height * sizeof(int *));
	for (x = 0; x < width; x++)
		array[x] = (int *)malloc(width * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		if (array[x] == NULL)
		{
			for (z = 0; z < x; z++)
			{
				free(array[z]);
			}
			free(array);
			return (NULL);

		}
		for (y = 0; y < width; y++)
		{
			array[x][y] = 0;
		}
	}
	return (array);
}
