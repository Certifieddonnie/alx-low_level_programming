#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit at a guven
 * index to 0.
 * @n: number bit.
 * @index: index to set value
 * Return: success or error (-1)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
