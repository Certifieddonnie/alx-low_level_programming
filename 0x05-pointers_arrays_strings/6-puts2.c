#include "main.h"

/**
 * puts2 - Function to print string in even address
 * @str: String parameter
 *
 * Return: nothing
 */

void puts2(char *str)
{
	for (; *str != '\0'; str += 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
