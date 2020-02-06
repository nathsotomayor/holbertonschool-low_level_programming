#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
* main - Print alphabet in lowercase and uppercase
* Return:0
*/
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	return (0);
}
