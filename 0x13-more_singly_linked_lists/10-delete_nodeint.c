#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index
 * @head: Double pointer
 * @index: Index of node
 * Return: Pointer to the index node
 */
 int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *c, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	c = *head;
	for (j = 0; j < index - 1; j++)
	{
		if (c->next == NULL)
			return (-1);
		c = c->next;
	}
	next = c->next;
	c->next = next->next;
	free(next);
	return (1);
}
