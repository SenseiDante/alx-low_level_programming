#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: String to count
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0' ; i++)
		count++;
	return (count);
}
