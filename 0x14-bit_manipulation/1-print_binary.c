#include "main.h"

/**
 * _pow - finction that calculates (base ^ power)
 * @base: base
 * @power: power
 *
 * Return: value of (base ^ power)
 *
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int x;

	num = 1;
	for (x = 1; x <= power; x++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: printable number
 *
 * Return: void
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int d, c;
	char flag;

	flag = 0;
	d = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (d != 0)
	{
		c = n & d;
		if (c == d)
		{
			flag = 1;
			_putchar ('1');
		}
		else if (flag == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
