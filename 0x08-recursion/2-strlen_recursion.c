#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string input
 *
 * Return: String Lenght
 */

int _strlen_recursion(char *s)
{
	int stringlength = 0;

	if (*s)
	{
		stringlength++;
		stringlength += _strlen_recursion(s + 1);
	}
	return (stringlength);
}
