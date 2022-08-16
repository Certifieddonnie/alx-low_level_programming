#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a listint_t
 * linked list.
 * @head: pointer to linked list
 * Return: head node's data(n).
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *current, *itr;

	if (head == NULL)
		return (0);
	itr = current = *head;
	if (*head)
	{
		i = current->n;
		*head = current->next;
		free(itr);
	}
	else
		i = 0;
	return (i);
}
