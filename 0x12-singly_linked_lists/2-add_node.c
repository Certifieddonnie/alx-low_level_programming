#include "lists.h"

/**
 * add_node - Function that adds a new node at the beginning of a
 * list_t list.
 * @head: struct
 * @str: string to add.
 * Return: address of new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t string;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	for (string = 0; str[string]; string++)
		;

	node->len = string;
	node->next = *head;
	*head = node;

	return (*head);
}
