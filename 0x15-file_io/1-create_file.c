#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: is the name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 success or -1 fails, NULL
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fld, x, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fld = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fld, text_content, len);

	if (fld == -1 || x == -1)
		return (-1);
	close (fld);

	return (1);
}
