#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: name of file to read.
 * @letters: number of letters it should read and print.
 * Return: varies on output.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count, read_count;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	read_count = read(fd, buf, letters);
	if (read_count == -1)
		return (0);

	count = write(STDOUT_FILENO, buf, read_count);
	if (count == -1 || read_count != count)
		return (0);

	free(buf);
	close(fd);

	return (count);
}
