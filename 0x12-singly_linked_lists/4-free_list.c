#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free single list link
 * @head: Pointer to the first node of the list
 * Return: Nothing
*/
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
