#include <stdio.h>

/**
 * main - Entry Point
 * Description: Program to print base 10 numbers
 *
 * Return: Always the value 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}

	putchar('\n');

	return (0);
}
