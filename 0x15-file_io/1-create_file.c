#include "main.h"

/**
 * create_file - Function that creates a file.
 * @filename: name of file to create.
 * @text_content: file content.
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, count;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;
		count = write(fd, text_content, i);
		if (count != i)
			return (-1);
	}

	close(fd);
	return (1);
}
