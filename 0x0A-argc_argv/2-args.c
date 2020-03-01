#include "holberton.h"

/**
 * main -Prints all arguments it receives
 * @argc: Number of command line arguments
 * @argv: Array containing the program command line arguments
 * @i
 * Return: 0 Always success
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
