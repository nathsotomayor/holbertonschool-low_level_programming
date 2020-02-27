#include "holberton.h"

int length(char *s);
int validate(int i, int j, char *s);

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
 * @s: Pointer to memory area
 * Return: int
 */

int is_palindrome(char *s)
{
	int size;

	size = length(s);

	return (validate(0, size - 1, s));
}

/**
 * validate - Verify cases for palindrome
 * @i: index
 * @j: size
 * @s: Pointer to memory area
 * Return: int
 */

int validate(int i, int j, char *s)
{
	if (s[i] == s[j] && i < j)
		return (1 * validate(i + 1, j - 1, s));
	if (j <= i)
		return (1);
	else
		return (0);
}

/**
 * length - Returns the length of a string
 * @s: Pointer to memory area
 * Return: int
 */

int length(char *s)
{
	if (*s != '\0')
	{
		return (1 + length(s + 1));
	}
	else
		return (0);
}
