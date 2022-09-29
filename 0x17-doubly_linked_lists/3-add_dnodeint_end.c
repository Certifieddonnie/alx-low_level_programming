#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end of
 * a dlistint_t list.
 * @head: Head Node
 * @n: node's data.
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tail;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	if (*head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	new_node->n = n;
	new_node->next = NULL;
	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = new_node;
	new_node->prev = tail;

	return (new_node);
}
