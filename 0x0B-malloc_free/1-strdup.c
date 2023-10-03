#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - points newly allocated space in memory
 * @str: string char
 *
 * Return: 0
 *
 */

char *_strdup(char *str)
{
	char *yyy;
	int m, n = 0;

	if (str == NULL)
		return (NULL);
	m = 0;
	while (str[m] != '\0')
		m++;

	yyy = malloc(sizeof(char) * (m + 1));

	if (yyy == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		yyy[n] = str[n];

	return (yyy);
}
