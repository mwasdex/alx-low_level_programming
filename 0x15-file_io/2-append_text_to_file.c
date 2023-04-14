#include "main.h"

/**
 * append_text_to_file - function that appends a text at the end of a file
 * @filename: name of file
 * @text_content: text
 * Return: 1 if sucess else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, len = 0, wr = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	wr  = write(fd, text_content, len);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
