#include "main.h"

/**
 * _stnract - concatenate two strings using dest and string
 * using at most n bytes from src
 * @dest: destination value
 * @src: source value
 * @n: byte value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[x] = src[y];
	x++;
	y++;
	}
	dest[x] = '\0';
	return (dest);
}

