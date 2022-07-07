#include "main.h"

/**
 * print_triangle - Function to print a triangle
 * @size: number of lines
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < (size - i - 1))
					_putchar(' ');
				else
					_putchar(35);

			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
