#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* read_textfile - Read a file and print it in the stdout
* @filename: Name of the file that we want to read
* @letters: Chars we want to print
* Return: Return the number of chars we printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t n, total_written = 0, w;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}
	n = read(fd, buf, letters);
	if (n == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	while (total_written < n)
	{
		w = write(1, buf + total_written, n - total_written);

		if (w == -1)
		{
			free(buf);
			close(fd);
			return (0);
		}
		total_written += w;
	}

	free(buf);
	close(fd);
	return (total_written);
}
