#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - Function that returns the length of a string
 * @s : Character
 * Return: Value is i
 */
int _strlen(const char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * add_node - Adds a node at the beginning of the linked list
 * @head: Pointer to the first node of the list
 * @str: String to add to new node in the list
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *a;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);
	a->str = strdup(str);

	a->len = _strlen(str);
	a->next = *head;
	*head = a;

	return (a);
}
