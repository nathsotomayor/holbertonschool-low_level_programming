#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Print alphabet in lowercase and in reverse
* Return:0
*/
int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
