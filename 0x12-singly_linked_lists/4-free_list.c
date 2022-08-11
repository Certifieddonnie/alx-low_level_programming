#include "lists.h"

/**
 * free_list - frees a list
 * @head: struct of linked list
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
