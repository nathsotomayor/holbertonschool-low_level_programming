#include "holberton.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: char
 * @src: char
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int pos_dest, pos_src;

	for (pos_dest = 0; dest[pos_dest] != '\0'; pos_dest++)
	{
	}

	for (pos_src = 0; src[pos_src] != '\0'; pos_src++)
	{
		dest[pos_dest] = src[pos_src];
		pos_dest++;
	}
		dest[pos_dest] = src[pos_src];

	return (dest);
}
