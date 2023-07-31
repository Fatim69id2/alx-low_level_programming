#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserting a new node at a given position
 * @head: Double pointer
 * @idx: Index of the node
 * @n: New node value
 * Return: The address of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *b, *a;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
	{
		return (NULL);
	}
	if (idx != 0)
	{
	a = *head;
		for (; i < idx - 1 && a != NULL; i++)
		{
			a = a->next;
		}
	if (a == NULL)
	{
		return (NULL);
	}
	}
	b = malloc(sizeof(listint_t));
	if (b == NULL)
	{
		return (NULL);
	}
	b->n = n;
	if (idx == 0)
	{
		b->next = *head;
		*head = b;
		return (b);
	}
	b->next = a->next;
	a->next = b;
	return (b);
}
