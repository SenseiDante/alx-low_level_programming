#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked lst to print
 *
 * Return: number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t
	num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
