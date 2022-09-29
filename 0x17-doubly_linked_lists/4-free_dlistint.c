#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Head node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
