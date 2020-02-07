#include <stdio.h>

/**
* main - Print all numbers of base 16 in lowercase
* Return:0
*/
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
