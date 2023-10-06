#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @y: memory to be filled
 * @x: char to copy
 * @n: number of times to copy x
 *
 * Return: pointer to the memory y
 *
 */

char *_memset(char *y, char x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		y[i] = x;
	}

	return (y);
}

/**
 * _calloc - allocates memory from an array
 * @nmemb: number of array elemnts
 * @size: size of each element
 *
 * Return: pointer of memory allocated
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
