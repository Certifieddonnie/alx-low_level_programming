#include "lists.h"

/**
 * get_nodeint_at_index - Function that return the nth node of a
 * listint_t linked list.
 * @head: linked list
 * @index: position of node.
 * Return: the nth node or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;


	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
