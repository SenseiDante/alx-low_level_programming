#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer input
 * @av: double point array
 *
 * Return: 0
 *
 */

char *argstostr(int ac, char **av)
{
	int m, n, r = 0, M = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
			M++;
	}
	M += ac;

	str = malloc(sizeof(char) * M + 1);
	if (str == NULL)
		return (NULL);
	for (m = 0; m < ac; m++)
	{
	for (n = 0; av[m][n]; n++)
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
