#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to the list_t to print singly linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x;

	x = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[%d] %s\n", 0, "(nil)");
		else
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}
	return (x);
}

