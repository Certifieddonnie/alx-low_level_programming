#include "main.h"

/**
 * _puts_recursion - Function that prints a string with a new line
 * @s: String
 *
 * Return: nothing.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
