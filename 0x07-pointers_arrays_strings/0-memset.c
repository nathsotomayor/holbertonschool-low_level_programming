#include "holberton.h"

/**
 * *_memset - Reverses the content of an array of integersg
 * @s: char
 * @b: char
 * @n
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n ; l++)
	{
		s[l] = b;
	}

	return (s);

}
