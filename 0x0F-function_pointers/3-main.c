#include "3-calc.h"

/**
 * main - Prints the result of the operation between two numbers
 * @argc: Size of argv
 * @argv: Elements
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	int (*ptr)(int a, int b);

	ptr = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", ptr(num1, num2));

	return (0);
}
