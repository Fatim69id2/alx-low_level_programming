#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a linked list
 * @head: Listint_t list to be freed
 * Return: NULL if error
*/

void free_listint(listint_t *head)
{
	listint_t *b;

	while (head != NULL)
	{
		b = head->next;
		free(head);
		head = b;
	}
}
