#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of values min to max.
 * @min: minimum value
 * @max: maxiumum value.
 *
 * Return: pointer to array.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int size, i, j;

	if (min > max)
		return (NULL);
	size = max - min;
	ptr = malloc((size + 1) * (sizeof(int *)));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	i = 0, j = min;
	while (j <= max)
	{
		ptr[i] = j;
		j++;
		i++;
	}
	return (ptr);
}
