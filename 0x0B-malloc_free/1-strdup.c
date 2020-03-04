#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 * @s: char
 * @x
 * Return: int
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; )
	{
		x++;
	}

	return (x);
}

/**
 * *_strdup - Returns a pointer to a newly allocated space in memory
 * @str: Array
 * Return: 0 success or NULL error
 */

char *_strdup(char *str)
{
	char *str2;
	int i, size;

	if (str == NULL)
		return (NULL);

	size = _strlen(str);

	str2 = malloc(size + 1 * sizeof(char));

	if (!str2)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		str2[i] = str[i];
	}

	return (str2);
}
