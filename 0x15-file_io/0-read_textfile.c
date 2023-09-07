#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This will read the text file print to STDOUT.
 * @filename: All text files are being read
 * @letters: Indicate numb of letters to be read
 * Return: w- tells the actual numb of bytes read and are printed
 *        0 when the function fails or filename indicates NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

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
