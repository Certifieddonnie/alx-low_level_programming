#include <stdio.h>

/**
 * main - Entry Point
 * Description: Program to print single digits
 *
 * Return: Always the value 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
