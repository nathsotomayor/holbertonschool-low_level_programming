#include "holberton.h"
/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: 1 on success and -1 on failure
 */
int main(int ac, char *av[])
{
	int fo_from, fo_to, rf = 0, wf;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fo_from = open(av[1], O_RDONLY);

	if (fo_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fo_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fo_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]), exit(99);

	rf = 1024;

	while (rf == 1024)
	{
		rf = read(fo_from, buf, 1024);
		wf = write(fo_to, buf, rf);
	}

	if (rf == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (wf == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	if (close(fo_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fo_from), exit(100);
	if (close(fo_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fo_to), exit(100);
	return (0);
}
