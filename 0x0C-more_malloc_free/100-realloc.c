#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Function to reallocate memory space for ptr
 * @ptr: pointer to array
 * @old_size: Old memory bytes
 * @new_size: New memory bytes
 *
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		ptr = malloc(new_size);
	}
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
