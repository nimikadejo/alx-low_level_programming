#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to read
 * @text_content: content to put in the file
 * Return: the number of letters printed, otherwise 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int written = 0;
	int length = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
		{
			length++;
		}
		written = write(fd, text_content, length);
		if (written == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
