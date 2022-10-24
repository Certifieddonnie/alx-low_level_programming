#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: hash table.
 * @key: key of the value.
 * @value: value in the array
 *
 * Return: 1 if it succeeds or 0 if it fails.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new;
	char *value_dup;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_dup = strdup(value); /* Duplicating the value */
	if (value_dup == NULL)
		return (0); /* STRDUP ERROR */

	index = key_index((const unsigned char *)key, ht->size);
	i = index;
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0) /* Comparing key values */
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_dup;
			return (1);
		}
		i++;
	}
	/* When Collision Errors Occur */
	new = malloc(sizeof(hash_node_t));
	/*A new linked list is created for values with same index*/
	if (new == NULL)
	{
		free(value_dup);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_dup;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
