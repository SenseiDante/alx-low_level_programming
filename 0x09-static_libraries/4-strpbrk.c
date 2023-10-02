#include "main.h"

/**
 * _strpbrk - function that locates the first occurence
 * @s: string value
 * @accept: input value
 *
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
		if (*s == accept[x])
		return (s);
		}
	s++;
	}
	return ('\0');
}
