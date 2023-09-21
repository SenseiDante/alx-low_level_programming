#include "main.h"

/**
 * _strcat - function appends the src string to the dest
 * @dest: destination value
 * @src: source value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
