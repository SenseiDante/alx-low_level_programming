#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @ min: minimum range of values
 * @max: maximum range of vaues and elemnts
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *x;
	int y, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	x = malloc(sizeof(int) * size);

	if (x == NULL)
		return (NULL);

	for (y = 0; min <= max; y++)
		x[y] = min++;

	return (x);
}
