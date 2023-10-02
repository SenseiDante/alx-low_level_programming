#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
