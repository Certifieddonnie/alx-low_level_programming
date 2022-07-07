#include "main.h"

/**
 * print_number - Function that prints integers
 * @n: n is the number to be printed
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int r, s, count;

	if (n < 0)
	{
		_putchar('-');
		r = n * -1;
	}
	else
		r = n;

	s = r;
	count = 1;

	while (s > 9)
	{
		s /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((r / count) % 10) + '0');
	}
}
