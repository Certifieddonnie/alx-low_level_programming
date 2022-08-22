#include "main.h"

/**
 * main - Entry Point
 * Description: a program that copies the content of a file to another file.
 * @argc: number of arguments passed to the program.
 * @argv: arguments.
 * Return: always 0. (success)
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, count, i, j;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((count = read(fd1, buf, BUFSIZ)) > 0)
	{
		if (fd2 < 0 || write(fd2, buf, count) != count)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd1);
			exit(99);
		}
	}
	if (count < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	i = close(fd1);
	j = close(fd2);
	if (i < 0 || j < 0)
	{
		if (i < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
