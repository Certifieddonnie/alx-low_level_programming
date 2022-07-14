#include "main.h"

/**
 * reverse_array - Function to reverse the content of an array of int
 * @a: array of integer
 * @n: number of elements in array.
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int rev;

	for (i = 0; i < (n - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			rev = a[j];
			a[j] = a[j - 1];
			a[j - 1] = rev;
		}
	}
}
