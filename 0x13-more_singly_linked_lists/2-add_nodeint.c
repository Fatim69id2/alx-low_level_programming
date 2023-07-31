#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning of a list
 * @head: Address of the first node of a list
 * @n: Integer to insert into the new node
 * Return: Pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *b;

	b = malloc(sizeof(listint_t));
	if (!b)
	{
		return (NULL);
	}
	b->n = n;
	b->next = *head;
	*head = b;

	return (b);
}
