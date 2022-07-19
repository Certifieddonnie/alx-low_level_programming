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
	int sum1;
	int sum2;
	int i;

	sum1 = 0;
	sum2 = 0;

	i = 0;

	while (i < size)
	{
		sum1 = sum1 + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size + size - i - 1);

		i++;
	}
	printf("%i, %i\n", sum1, sum2);
}
