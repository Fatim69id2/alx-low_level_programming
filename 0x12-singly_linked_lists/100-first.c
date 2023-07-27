#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _fre_list - Realease the memory allocated for a list
 * @head: A pointer to the first node of the list to free
*/
void _fre_list(list_t *head)
{
	if (head)
	{
		_fre_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
