#include "lists.h"

/**
 * print_dlistint - Function that prints all elements of a
 * dlistint_t list.
 * @h: Head node pointer
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
