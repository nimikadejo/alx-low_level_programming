#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to read
 * @letters: number ofcharacters to read and print
 * Return: the number of letters printed, otherwise 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *text;
	ssize_t written = 0, textread = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == 1)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);
	textread = read(fd, text, letters);
	if (textread == -1)
	{
		free(text);
		return (0);
	}
	written = write(STDOUT_FILENO, text, textread);
	if (written == -1)
	{
		free(text);
		return (0);
	}
	close(fd);
	free(text);
	return (textread);
}
