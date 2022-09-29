#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the nth node of a
 * dlistint_t linked list.
 * @head: head node
 * @index: the index of the node starting from 0.
 * Return: Nth node of the list or Null if doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
