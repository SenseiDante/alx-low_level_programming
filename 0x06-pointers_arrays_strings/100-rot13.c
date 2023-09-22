#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @d: pointer to string parameter
 *
 * Return: *d
 */

char *rot13(char *d)
{
	int x;
	int y;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzABCDEFGHIJKLM";

	for (x = 0; d[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (d[x] == data1[y])
			{
				d[x] = datarot[y];
				break;
			}
		}
	}
	return (d);
}
