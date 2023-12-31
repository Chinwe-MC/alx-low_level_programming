#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 *append_text_to_file - function name
 *@text_content: parameter
 *@filename: parameter
 *Return: 0 success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	bytes_written = write(fd, text_content, strlen(text_content));
	close(fd);
	if (bytes_written == -1)
	{
		return (-1);
	}
	return (1);
}

