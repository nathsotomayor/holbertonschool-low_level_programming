#include "holberton.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: Base number
 * @y: Exponent
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	if (y < 0)
		return (-1);
	else
		return (1);
}
