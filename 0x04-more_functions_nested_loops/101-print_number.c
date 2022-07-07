#include "main.h"

/**
 * print_number - Function that prints integers
 * @n: n is the number to be printed
 *
 * Return: nothing
 */

void print_number(int n)
{
	if (n < 0 || n > 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}

		if (n / 10)
			print_number(n / 10);

		_putchar(n % 10 + '0');
	}
	else
		_putchar('0');
}
