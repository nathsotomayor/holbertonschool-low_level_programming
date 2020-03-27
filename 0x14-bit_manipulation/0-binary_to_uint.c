#include "holberton.h"

/**
 * _pow - Returns the value of x raised to the power of y_
 * @x: Base number
 * @y: Exponent
 * Return: int
 */

unsigned int _pow(int base, unsigned int power)
{
	unsigned int result = 1, i;

	for (i = 0; i < power; i++)
	{
		result = result * base;
	}

	return (result);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Pointer to string
 *
 * Return: The converted number, or 0 if some char is not 0 or 1 and is b is NU
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, len;
	int i;

	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
	}

	if (b == '\0')
		return (0);

	i = len - 1;
	len = 0;
	for (; i >= 0; --i)
	{
		if (b[i] == '1')
		{
			res = res + _pow(2, len);
		}
		len++;
	}
	return (res);
}
