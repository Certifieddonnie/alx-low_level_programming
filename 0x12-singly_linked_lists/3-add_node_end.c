#include "listsi.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a
 * list_t list
 * @head: pointer to struct
 * @str: String to add.
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	size_t string;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);

	for (string = 0; str[string]; string++)
		;

	node->len = string;
	node->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}
	return (*head);
}
