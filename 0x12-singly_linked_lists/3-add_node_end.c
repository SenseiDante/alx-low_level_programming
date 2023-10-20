#include "lists.h"

/**
 * add_node_end - adds node at the end of the list
 * @head: node head
 * @str: string
 *
 * Return: adress of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *y;
	unsigned int x, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		count++;
	newnode->len = count;
	newnode->next = NULL;
	y = *head;

	if (y == NULL)
		*head = newnode;
	else
	{
		while (y->next != NULL)
			y = y->next;
		y->next = newnode;
	}
	return (*head);
}
