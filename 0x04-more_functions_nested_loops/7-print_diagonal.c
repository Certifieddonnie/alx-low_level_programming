#include "main.h"

/**
 * print_diagonal - Function to print diagonals n times
 * @n: number of times
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int j;

		for (i = 1; i <= n; i++)
		{
			for(j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
