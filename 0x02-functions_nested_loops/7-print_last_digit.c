#include "main.h"

/**
 * print_last_digit - Entry Point
 * @n: the value
 * Description: Function to print last digit of the number
 *
 * Return: Always a
 */

int print_last_digit(int n)
{
	int d;

	if (n < 0)
	{
		d = (-1 * (n % 10));
		_putchar (d + '0');
		return (d);
	}
	else
	{
		d = (n % 10);
		_putchar (d + '0');
		return (d);
	}

	return (0);
}
