#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_written;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}
	num_read = read(fd, buf, letters);
	if (num_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	num_written = write(STDOUT_FILENO, buf, num_read);
	if (num_written == -1 || num_written != num_read)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (num_written);
}
