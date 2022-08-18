#include "main.h"

/**
 * print_binary - FUnction that prints the binary rep of a number.
 * @n: number.
 * Return: nothing.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
