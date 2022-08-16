#include "lists.h"

/**
 * reverse_listint - Function that reverses a listint_t linked list
 * @head: pointer to linked list.
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *past = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = past;
		past = *head;
		*head = next;
	}
	*head = past;
	return (*head);
}
