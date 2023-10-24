#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element of a linked list
 *
 * Return: head node’s data
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int z;

	if (!head || !*head)
		return (0);

	z = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (z);
}
