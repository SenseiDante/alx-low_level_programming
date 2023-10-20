#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: singly linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t x;

	x = 0;
	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}

