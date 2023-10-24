#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to first node in the likned list
 * @index: index of the node to return
 *
 * Return: pointer to nth node, or return NULL
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int x = 0;

	while (tmp && x < index)
	{
		tmp = tmp->next;
		x++;
	}
	return (tmp ? tmp : NULL);
}
