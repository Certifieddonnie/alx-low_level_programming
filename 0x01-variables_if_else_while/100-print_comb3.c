#include <stdio.h>

/**
 * main - Entry Point
 * Description: Program to print two digits combination without repitition
 *
 * Return: Always the value 0 (success)
 */

int main(void)
{
	int var;

	for (var = 0; var < 9; var++)
	{
		int var2;

		for (var2 = var + 1; var2 < 10; var2++)
		{
			putchar((var % 10) + '0');
			putchar((var2 % 10) + '0');

			if (var != 8)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}

	putchar('\n');

	return (0);
}
