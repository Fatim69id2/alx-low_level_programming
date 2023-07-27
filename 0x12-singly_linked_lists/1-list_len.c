#include "lists.h"

/**
 * list_len - check the code for Holberton School students.
 * @h: name of the list
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	int c = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		c++;
	}

	return (c);
}
