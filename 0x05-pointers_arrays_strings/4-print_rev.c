#include "main.h"

/**
 * print_rev - Function to print the reverse of a string
 * @s: String Parameter
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
	}
	i--;

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
