#include "main.h"

/**
 * main - check sfor lowercase characters
 * @c: parameter to be checked
 * Return: 1 or 0
 */

int _islower(int c)
{
	if ((c >= 'a') && c <= 'z')
		return (1);
	else
		return (0);
}
