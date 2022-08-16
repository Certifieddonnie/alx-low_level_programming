#include "lists.h"

/**
 * print_listint_safe - Function that prints a listint_t linked list
 * @head: linked list.
 * Return: number of nodes.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;

	while (head != NULL)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);
}
