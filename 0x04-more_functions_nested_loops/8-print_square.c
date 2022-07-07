#include "main.h"

/**
 * print_square - Function that prants n by n square
 * @size: n parameter
 *
 * Return: nothing
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
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
