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
	unsigned int i = 0;
	listint_t *finder;

	finder = head;

	if (head == NULL)
		return (NULL);
	for (i; i < index; i++)
	{
		if (finder->next == NULL)
			return (NULL);
		finder = finder->next;
	}
	return (finder);
}
