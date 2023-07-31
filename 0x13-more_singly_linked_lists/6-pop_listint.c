#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list
 * @head: Double pointer
 * Return: Integer value stored in the node that is being removed
*/
int pop_listint(listint_t **head)
{
	listint_t *a;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	a = (*head)->next;
	free(*head);
	*head = a;

	return (n);
}
