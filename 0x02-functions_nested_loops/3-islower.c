#include "holberton.h"
#include <ctype.h>

/**
 * _islower - Checks for lowercase character
 * Return: 1, 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
