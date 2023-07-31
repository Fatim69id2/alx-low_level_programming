#include "lists.h"

/**
 * print_listint - Print elements of a singly linked list
 * @h: Pointer to a list
 * Return: Integer
*/
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
