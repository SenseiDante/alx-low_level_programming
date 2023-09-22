#include "main.h"

/**
 * reserve_array - reverse array of intergets
 * @a: arrays
 * @n: elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
