#include "main.h"
#include <stdio.h>

/**
 * print_array - Function to print n elements of an array of integers
 * @a: array
 * @n: number of elements
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
