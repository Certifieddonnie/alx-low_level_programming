#include "main.h"

/**
 * print_line - Function to print line in terms with the number
 * inputted.
 * @n: Number of line
 *
 *Return: nothing
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
