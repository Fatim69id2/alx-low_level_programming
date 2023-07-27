#include "lists.h"

/**
 * add_node_end - Adds a new node to the end of linked list
 * @head: Double pointer to a linked list
 * @str: String to add to the new node
 * Return: Pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *t;
	size_t str_len = 0;

	if (str == NULL)
		str_len = 0;

	while (str[str_len] != '\0')
		str_len++;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->len = str_len;
	n->next = NULL;

	t = *head;

	if (t == NULL)
		*head = n;
	else
	{
		while (t->next != NULL)
			t = t->next;
		t->next = n;
	}

	return (*head);
}
