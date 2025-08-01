#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: Null-terminated string to add at the end.
 *
 * Return: 1 on success, -1 on failure.
 *         Does not create the file if it does not exist.
 *         Returns -1 if filename is NULL or cannot open/write file.
 *         Returns 1 if text_content is NULL and file exists.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[len] != '\0')
	{
		len++;
	}

	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1 || bytes_written != (ssize_t)len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
