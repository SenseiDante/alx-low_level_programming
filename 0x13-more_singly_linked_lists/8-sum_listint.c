#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a linked list
 * @head: first node in the linked list
 *
 * Return: Sum
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
