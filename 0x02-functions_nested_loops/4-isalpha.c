#include "holberton.h"

/**
 * _isalpha - Checks for alphabet character
 * @c: int
 * Return: 1, 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
