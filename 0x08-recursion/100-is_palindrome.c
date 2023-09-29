#include "main.h"

/**
 * _strlen_recursion - returns string length
 * @s: string to get length
 *
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * check_pal - checks the characters recursively if palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of string
 *
 * Return: 1 or 0
 */

int check_pal(char *s, int i, int len)
{
	if ((*s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
