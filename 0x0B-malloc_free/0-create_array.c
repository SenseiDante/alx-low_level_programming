#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array and assigns char c
 * @size: size of array
 * @c: char to assign
 * Description: create array size size and assign char c
 * Return: Array pointer, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}
