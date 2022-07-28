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
		return (0);
	size = max - min;
	ptr = malloc((size + 1) * (sizeof(*ptr)));
	if (!ptr)
		return (0);
	i = 0, j = min;
	while (i <= size)
	{
		ptr[i++] = j++;
	}
	return (ptr);
}
