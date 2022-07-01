#include <stdio.h>

/**
 * main - Entry Point
 * Description: Program to print base 10  numbers using putchar
 *
 * Return: Alwayd the value 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar((i % 10) + '0');
		i++;
	}

	putchar('\n');

	return (0);
}
