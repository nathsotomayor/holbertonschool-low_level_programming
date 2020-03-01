#include "holberton.h"

/**
 * main -Prints the number of arguments passed into it
 * @argc: Number of command line arguments
 * @argv: Array containing the program command line arguments
 * @i
 * Return: 0 Always success
 */

int main(int argc, char **argv)
{
	int i, res = 0;

	for (i = 0; i < argc; i++)
	{
		res = i;
	}

	printf("%d\n", res);

	(void)argv;

	return (0);
}
