#include "main.h"

/**
 * _strchr - locates character string
 * @c: pointer to the first occuerence input value
 * @s: input string
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
