#include "holberton.h"

/**
 * main - Multiplies two numbers
 * @argc: Number of command line arguments
 * @argv: Array containing the program command line arguments
 * @mul
 * Return: 0 Always success
 */

int main(int argc, char **argv)
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
}
