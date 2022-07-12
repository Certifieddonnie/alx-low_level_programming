#include "main.h"

/**
 * puts2 - Function to print string in even address
 * @str: String parameter
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
