#include <fcntl.h>
#include <unistd.h>

/**
* append_text_to_file - Appends text at the end of a file
* @filename: Name of the file
* @text_content: Content that need to be append
* Return: Return 1 on succes or -1 if not
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (-1);
	}

	while (text_content[i] != '\0')
		i++;

	w = write(fd, text_content, i);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
