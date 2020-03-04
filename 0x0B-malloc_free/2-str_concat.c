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
 * *str_concat - Concatenates two strings
 * @s1: First array to concatenate
 * @s2: Second array to concatenate with s1
 * Return: Char if success, NULL if fail
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, l1, l2;
	char *sentence;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = _strlen(s1);
	l2 = _strlen(s2);

	sentence = malloc(l1 + l2 + 1 * sizeof(char));

	if (!sentence)
		return (NULL);

	for (size1 = 0; size1 < l1; size1++)
	{
		sentence[size1] = s1[size1];
	}

	for (size2 = 0; size2 <= l2; size2++)
	{
		sentence[size1 + size2] = s2[size2];
	}

	return (sentence);
}
