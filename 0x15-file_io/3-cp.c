#include "holberton.h"
/**
 * main - prints the result adds positive numbers
 * @ac: count
 * @av: array
 *
 * Return: 0
 */
int main(int ac, char *av[])
{
	int fileofrom, fdo_to, filedfrom, fdw_to;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fileofrom = open(av[1], O_RDONLY);
	if (fileofrom < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fdo_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdo_to < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
		filedfrom = read(fileofrom, buffer, 1024);
		fdw_to = write(fdo_to, buffer, filedfrom);
	} while (filedfrom == 1024);
	if (filedfrom < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (fdw_to < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	if (close(fileofrom) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileofrom), exit(100);
	if (close(fdo_to) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdo_to), exit(100);
	return (0);
}
