#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node at a
 * gven position.
 * @head: pointer to linked list
 * @idx: index
 * @n: new value of the new node.
 * Return: address of new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *finder, *new_node;
	unsigned int i = 1;

	finder = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = finder;
		*head = new_node;
		return (*head);
	}
	while (idx > 1)
	{
		if (i == idx)
		{
			new_node->next = finder->next;
			finder->next = new_node;
			break;
		}
		i++;
		finder = finder->next;
		if (!finder)
		{
			free(new_node);
			return (NULL);
		}
	}
	return (new_node);
}
