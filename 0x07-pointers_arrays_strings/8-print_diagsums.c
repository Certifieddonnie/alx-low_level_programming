#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Function that prints the sum of the two diagonals
 * @a: String of integer array.
 * @size: Size of array
 *
 * Return: Always the sum
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i = 0;

	while (i < (size * size))
	{
		if ((i % (size + 1)) == 0)
			sum1 += a[i];
		if ((i % (size - 1)) == 0 && i != ((size * size) - 1))
			sum2 += a[i];
		i++;
	}

	printf("%d, %d \n", sum1, sum2);
}
