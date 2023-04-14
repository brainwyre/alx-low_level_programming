#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text_file print STDOUT.
 * @filename: reading text_file
 * @letters: Amount of letters in text_file
 * Return: w- exact number of bytes printed & read
 *        0 when function fails or filename is nill.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t t;
	ssize_t fd;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
