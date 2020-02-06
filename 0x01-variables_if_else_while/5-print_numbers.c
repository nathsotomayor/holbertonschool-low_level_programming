#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Print all single digit numbers of base 10 starting from 0
* Return:0
*/
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
