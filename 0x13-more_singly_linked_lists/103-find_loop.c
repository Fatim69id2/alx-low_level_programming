#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - Finds the loop in a listint_t linked list
 * @head: Pointer to the head of the linked list
 * Return: The address of the node where the loop starts, or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head;
	listint_t *f = head;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}

	while (s && f && f->next)
	{
		f = f->next->next;
		s = s->next;
		if (f == s)
		{
			s = head;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (f);
		}
	}
	return (NULL);
}
