#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Function to print a buffer
 * @b: buffer
 * @size: size of buffer
 *
 * Return: nothing.
 */

void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
		printf("\n");
	else
	{
		j = 0;
		while (j < size)
		{
			printf("%.8x:", j);
			for (k = j; k < j + 10; k++)
			{
				if (k % 2 == 0)
					printf(" ");
				if (k < size)
					printf("%.2x", b[k]);
				else
					printf(" ");
			}
			printf(" ");
			for (i = j; i < j + 10; i++)
			{
				if (i >= size)
					break;
				if (b[i] < 32 || b[i] > 126)
					printf("%c", '.');
				else
					printf("%c", b[i]);
			}
			j += 10;
			printf("\n");
		}
	}
}
