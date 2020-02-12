#include "holberton.h"

/**
 * _islower - Checks for lowercase character
 * @c: char
 * Return: 1, 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
