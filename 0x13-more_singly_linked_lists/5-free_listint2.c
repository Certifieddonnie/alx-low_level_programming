#include "lists.h"

/**
 * free_listint2 - Function that sets the head to NULL and frees the list.
 * @head: linked list.
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *alt;

	if (head == NULL)
		return;
	alt = *head;
	while (alt != NULL)
	{
		alt = alt->next;
		free(*head);
		*head = alt;
	}
	*head = NULL;
}
