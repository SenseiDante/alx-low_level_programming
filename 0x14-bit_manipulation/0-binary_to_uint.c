#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string containing binary number
 *
 * Return: the converted number, or 0 if NULL
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int x;

	num = 0;
	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		num <<= 1;
		if (b[x] == '1')
			num += 1;
	}
	return (num);
}
