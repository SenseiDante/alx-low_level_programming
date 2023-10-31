#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: text to be read
 * @letters: number of letters to read
 *
 * Return: number of letter read and printed or 0 if file is NULLL
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fld;
	ssize_t x;
	ssize_t y;

	fld = open(filename, O_RDONLY);
	if (fld == -1)
		return (0);
	but = malloc(sizeof(char) * letters);
	y = read(fld, buf, letters);
	x = write(STDOUT_FILENO, buf, y);

	free(buf);
	close(fld);
	return (x);
}
