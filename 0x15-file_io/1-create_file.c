#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: file to read
 * @text_content: number of letters to read and print
 *
 * Return: numbers of letters it could read and print
 */

int create_file(const char *filename, char *text_content)
{
	int fo, fw, len_text;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_TRUNC | O_CREAT | O_RDWR, 0600);

	if (fo == -1)
		return (-1);

	for (len_text = 0; text_content[len_text] != '\0'; len_text++)
	{
	}

	fw = write(fo, text_content, len_text);

	if (fw == -1)
		return (-1);

	close(fo);

	return (1);
}
