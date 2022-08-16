#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list
 * @head: Linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
