#include "main.h"

/**
 * main - Entry Point
 * Description: Program to print alphabet 10x
 *
 *Return: Always the value 0 (success)
 */

void print_alphabet_x10(void);
{
	int i;
	char c;

	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; ++c)
			_putchar(c);
	}
	_putchar("\n");

}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
