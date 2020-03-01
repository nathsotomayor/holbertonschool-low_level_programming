#include "holberton.h"

/**
 * main - Multiplies two numbers
 * @argc: Number of command line arguments
 * @argv: Array containing the program command line arguments
 * @i
 * Return: 0 Always success
 */

int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
			mul = mul * atoi(argv[i]);
	}

	printf("%d\n", mul);

	return (0);
}
