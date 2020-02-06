#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Print alphabet in lowercase
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
	return (0);
}
