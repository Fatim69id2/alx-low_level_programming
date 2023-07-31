#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - The nth node of a listint_t linked list
 * @head: Pointer of the first node of the list
 * @index: Index is the index of the node to retrieve (starting from 0)
 * Return: Pointer to the node at the specified index, or NULL if not found
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
	}
	return (head);
}
