#include "main.h"

/**
 * puts_half - Function to print the remaining half of a string
 * @str: String Parameter
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int n;
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
	}

	n = (i + 1) / 2;

	for (i = n; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
