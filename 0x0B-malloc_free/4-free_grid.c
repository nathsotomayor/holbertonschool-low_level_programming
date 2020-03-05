#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Free a 2 dimensional grid
 * @grid: Array to free
 * @height: Height from grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
