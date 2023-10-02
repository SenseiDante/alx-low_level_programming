#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to a integer
 * @s: string to be converted
 *
 * Return: the int converted form the string
 */

int _atoi(char *s)
{
	int x, y, n, len, f, digit;

	x = 0;
	y = 0;
	n = 0;
	len = 0;
	f = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && f == 0)
	{
		if (s[x] == '-')
			++y;
		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}
	if (f == 0)
		return (0);

	return (n);
}
/**
 * main - multiples two numbers
 * @argc: number of arguments
 * @argv: array of argumets
 *
 * Return: 0 Sucess or 1 Error
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
