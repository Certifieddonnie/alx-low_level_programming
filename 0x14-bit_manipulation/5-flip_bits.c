#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;

	for (i = 63; i >= 0; i--)
	{
		if (((n ^ m) >> i) & 1)
			num++;
	}
	return (num);
}
