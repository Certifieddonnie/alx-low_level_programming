#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 * at a given index.
 * @head: Head node pointer
 * @index: index of node to delete
 * Return: success(1) or (-1) failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;


	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
