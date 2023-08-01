#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: Pointer to the head pointer of the linked list
 * Return: The number of nodes in the list
*/
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int d;
	listint_t *t;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
		}
	}
	*h = NULL;
	return (l);
}
