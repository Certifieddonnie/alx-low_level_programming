#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all data (n) of
 * a dlistint_t linked list.
 * @head: head node
 * Return: sum of the datas or 0 if empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
