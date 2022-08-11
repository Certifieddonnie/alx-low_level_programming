#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a
 * linked list_t list.
 * @h: Pointer to struct.
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	int nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");

		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
