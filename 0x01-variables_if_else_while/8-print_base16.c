#include <stdio.h>

/**
 * main - Entry Point
 * Description: Program to print hexadecimal numbers
 *
 * Return: Always the value 0 (success)
 */

int main(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		putchar((i % 10) + '0');
		i++;
	}
	for (c = 'a'; c <= 'f'; ++c)
		putchar(c);

	putchar('\n');
	return (0);
}
