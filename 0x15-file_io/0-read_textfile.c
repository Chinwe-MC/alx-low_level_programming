#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 *read_textfile - function name
 *@filename: parameter
 *@letters: parameter
 *Return: Always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
	return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
	return (0);
	}

	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
	close(fd);
	return (0);
	}
	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
	{
	close(fd);
	free(buffer);
	return (0);
	}
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
	close(fd);
	free(buffer);
	return (0);
	}
	close(fd);
	free(buffer);
	return (bytesWritten);
}
