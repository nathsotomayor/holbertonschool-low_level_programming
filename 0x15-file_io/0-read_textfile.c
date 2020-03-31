#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: file to read
 * @letters: number of letters to read and print
 *
 * Return: numbers of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, fw;
	char *buf;

	buf = malloc(letters);

	if (filename == NULL)
		return (0);

	fo = open(filename, O_RDONLY);

	if (fo == -1)
		return (0);

	read(fo, buf, letters);

	fw = write(STDOUT_FILENO, buf, letters);

	if (fw == -1)
		return (0);

	free(buf);
	close(fo);

	return (fw);
}
