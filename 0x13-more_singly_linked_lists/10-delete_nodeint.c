#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to linked list
 * @index: position.
 * Return: success (1) and fails (-1)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *present, *prev;

	if (!head || !*head)
		return (-1);
	present = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(present);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		present = present->next;
		if (present == NULL)
			return (-1);
	}
	prev = present->next;
	present->next = prev->next;
	free(prev);
	return (1);
}
