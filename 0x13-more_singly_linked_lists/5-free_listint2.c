#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Function that frees a listint_t list
 * @head: Double pointer of lists
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *a;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		a = (*head)->next;
		free(*head);
		*head = a;
	}
}
