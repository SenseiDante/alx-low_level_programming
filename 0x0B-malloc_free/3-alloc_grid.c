#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **z;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	z = malloc(sizeof(int *) * height);

	if (z == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		z[m] = malloc(sizeof(int) * width);

		if (z[m] == NULL)
		{
			for (; m >= 0; m--)
				free(z[m]);
			free(z);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			z[m][n] = 0;
	}
	return (z);
}
