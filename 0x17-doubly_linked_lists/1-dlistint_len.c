#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements in
 * a linked dlistint_t list.
 * @h: Head node Pointer
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number_of_elem = 0;

	while (h != NULL)
	{
		h = h->next;
		number_of_elem++;
	}
	return (number_of_elem);
}
