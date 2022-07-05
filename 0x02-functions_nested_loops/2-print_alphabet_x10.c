#include "main.h"

/**
 * print_alphabet_x10 - Entry Point to function
 * Description: Program to print alphabets 10x
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; ++c)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
