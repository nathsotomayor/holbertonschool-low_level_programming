#include "holberton.h"

/**
 * _pow - Returns the value of x raised to the power of y_
 * @x: Base number
 * @y: Exponent
 * Return: int
 */

unsigned int _pow(int x, int y)
{
	if (y > 0)
		return (x * _pow(x, y - 1));
	if (y < 0)
		return (-1);
	else
		return (1);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Pointer to string
 *
 * Return: The converted number, or 0 if some char is not 0 or 1 and is b is NU
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, len = 0;
	int i, pos_pot = 0;

	len = strlen(b);

	if (b == NULL)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		if (b[i] == '1')
		{
			res = res + _pow(2, pos_pot);
		}
		pos_pot++;
	}
	return (res);
}
