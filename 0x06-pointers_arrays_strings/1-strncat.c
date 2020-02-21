#include "holberton.h"

/**
 * *_strncat - Concatenates two strings
 * @dest: char
 * @src: char
 * @n: int
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int pos_dest, pos_src;

	for (pos_dest = 0; dest[pos_dest] != '\0'; pos_dest++)
	{
	}

	for (pos_src = 0; src[pos_src] != '\0' && pos_src < n; pos_src++)
	{
		dest[pos_dest] = src[pos_src];
		pos_dest++;
	}

	return (dest);
}
