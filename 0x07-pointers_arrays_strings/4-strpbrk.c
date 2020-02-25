#include "holberton.h"

/**
 * *_strpbrk - Searches a string for any of a set of bytes
 * @s: Char pointer
 * @accept: Character for found
 * @l
 * Return: c or null
 */

char *_strpbrk(char *s, char *accept)
{
	int l;

	for (l = 0; s[l] && accept[l]; l++)
	{
		if (s[l] == accept[l])
			return (s + l);
	}
	if (s[l] == accept[l])
		return (s + l);

	return ('\0');
}
