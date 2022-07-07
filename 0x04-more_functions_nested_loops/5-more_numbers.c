#include "main.h"

/**
 * more_numbers - Function to print 0 to 14 ten times
 * i: the number of time the numbers are printed
 * j: the first value of the two digits numbers
 * k: the second value of the two digits numbers
 * m: the one digit numbers represented by k
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;
	int m;

	for (i = 0; i < 10; i++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m < 10)
			{
				k = m;
			}
			else
			{
				j = m / 10;
				k = m % 10;
				_putchar(j + '0');
			}
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
