#include "main.h"

/**
 * swap_int - Function to swap the values of two integers
 * @a: Integer parameter one
 * @b: integer parameter two
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
