#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node at the end of a
 * listint_t list.
 * @head: linked list
 * @n: new value to be added
 * Return: address of new element or Null if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *itr_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	itr_node = *head;
	while (itr_node->next != NULL)
		itr_node = itr_node->next;
	itr_node->next = new_node;

	return (*head);
}
