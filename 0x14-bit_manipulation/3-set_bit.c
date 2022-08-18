#include "main.h"

/**
 * set_bit - Function that sets the values of a bit at a given
 * index to 1
 * @n: number
 * @index: index
 * Return: success or error -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n ^= (1 << index);
	return (1);
}
