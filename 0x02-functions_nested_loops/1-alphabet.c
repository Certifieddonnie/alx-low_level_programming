#include "main.h"

/**
 * print_alphabet - Entry Point of function
 * Description: A funtion to print alphabets in lowercase
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		_putchar(c);

	_putchar('\n');
	return;
}
