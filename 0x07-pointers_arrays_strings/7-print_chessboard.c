#include "holberton.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: Char pointer
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[i][j]);
		}
	}
}
