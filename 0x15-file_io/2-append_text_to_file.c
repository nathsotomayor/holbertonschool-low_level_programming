#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to read
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw, len_text = 0;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_RDWR | O_APPEND, 0600);

	if (fo == -1)
		return (-1);

	if (text_content)
	{
		for (len_text = 0; text_content[len_text] != '\0'; len_text++)
		{
		}
	}

	fw = write(fo, text_content, len_text);

	if (fw == -1)
		return (-1);

	close(fo);

	return (1);
}
