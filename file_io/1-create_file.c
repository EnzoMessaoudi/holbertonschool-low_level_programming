#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
* create_file - Creates a file
* @filename: Name of the file
* @text_content: What's inside of the file
* Return: Return 1 if succes or 0 if not
*/

int create_file(const char *filename, char *text_content)
{
	int fd, w, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
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
