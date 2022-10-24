#include "hash_tables.h"

/**
 * hash_table_create - A Function that creates a hash table.
 * @size: size of the array
 * Return: A pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned long int i;

	new_hash = malloc(sizeof(hash_table_t));
	if (!new_hash)
	{
		return (NULL);
	}

	new_hash->size = size;
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_hash->array)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		new_hash->array[i] = NULL;
		i++;
	}

	return (new_hash);
}
