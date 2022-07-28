#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: size
 *
 * Return: Always a pointer.
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
