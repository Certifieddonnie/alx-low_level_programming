#include "main.h"

/**
 * get_bit - Function that return the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: L success (index)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
