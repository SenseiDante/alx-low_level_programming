#include "main.h"

/**
 * print_number - print number charts
 * @x: integer parameters
 *
 * Return: 0
 */

void print_number(int x)
{
	unsigned int x1;

	x1 = x;

	if (x < 0)
	{
		_putchar('-');
		x1 = -n;
	}
	if (x1 / 10 != 0)
	{
		print_number(x1 / 10);
	}
	_putchar((x1 % 10) + '0');
}
