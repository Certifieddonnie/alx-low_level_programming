#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a new
 * node at a given position.
 * @h: head node
 * @idx: index
 * @n: node's data
 * Return: Address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *head, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1: idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	
	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
