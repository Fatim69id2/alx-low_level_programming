#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list and counts the number
 * @head: Pointer to the first node of the linked list
 * Return: The number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *t = NULL;
	const listint_t *n = NULL;
	size_t count = 0;
	size_t w;

	t = head;
	while (t)
	{
		printf("[%p] %d\n", (void *)t, t->n);
		count++;
		t = t->next;
		n = head;
		w = 0;
		while (w < count)
		{
			if (t == n)
			{
				printf("-> [%p] %d\n", (void *)t, t->n);
				return (count);
			}
			n = n->next;
			w++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
