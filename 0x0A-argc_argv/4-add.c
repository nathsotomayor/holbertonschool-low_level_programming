#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @argc: Number of command line arguments
 * @argv: Array containing the program command line arguments
 * @i
 * @j
 * @sum
 * Return: 0 Success or 1 Error
 */

int main(int argc, char **argv)
{
	int i, j;
	unsigned int sum = 0;

	if (argc < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
				sum = sum + atoi(argv[i]);
		}
		printf("%u\n", sum);
	}
	return (0);
}
