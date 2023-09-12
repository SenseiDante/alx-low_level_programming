#include "main.h"

/**
 * main - Print the alphabet in smallcase X10
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
	for (j = 'a' ; j <= 'z' ; j++)
		_putchar(j);
	_putchar('\n');
	}
}
