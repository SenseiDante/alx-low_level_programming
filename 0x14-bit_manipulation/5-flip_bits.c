#include "main.h"

/**
 * flip_bits - returns number of bits to flip to another number
 * @n: first number
 * @m: number to flip to
 *
 * Return: number of bits
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, countbit = 0;
	unsigned long int initial;
	unsigned long int final = n ^ m;

	for (x = 63; x >= 0; x++)
	{
		initial = final >> x;
		if (initial & 1)
			countbit++;
	}
	return (countbit);
}
