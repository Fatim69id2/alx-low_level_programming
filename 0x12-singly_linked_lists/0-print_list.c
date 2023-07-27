#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print elements in a linked list
 * @h: pointer to head first node
 * Return: Number of nodes
*/
size_t print_list(const list_t *h)
{
	int c = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		c++;
		h = h->next;
	}
	return (c);
}
