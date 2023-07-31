#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list
 * @head: Address of the first node of a list
 * @n: Integer to insert in the new node
 * Return: pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *b;
	listint_t *a = *head;

	b = malloc(sizeof(listint_t));
	if (!b)
	{
		return (NULL);
	}
	b->n = n;
	b->next = NULL;

	if (*head == NULL)
	{
		*head = b;
		return (b);
	}

	while (a->next)
	{
		a = a->next;
	}

	a->next = b;

	return (b);
}
