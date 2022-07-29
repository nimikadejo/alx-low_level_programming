#include "main.h"
/**
 * append_text_to_file - appends text to an existing file
 * @filename: the file to be read
 * @text_content: content to add in the file
 * Return: the number of letters printed, otherwise 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int written = 0;
	int textlen = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[textlen] != '\0')
			textlen++;
		written = write(fd, text_content, textlen);
		if (written == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
