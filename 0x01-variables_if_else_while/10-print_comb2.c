#include <stdio.h>

/**
* main - Prints the numbers from 00 to 99
* Return:0
*/
int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			putchar(x);
			putchar(y);
				if (x < 57 || y < 57)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
