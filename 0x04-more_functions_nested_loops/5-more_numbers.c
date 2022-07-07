#include "main.h"

/**
 * more_numbers - Function to print 0 to 14 ten times
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar((j) + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
