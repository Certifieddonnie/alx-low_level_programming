#include <stdio.h>

/**
 * main - Entry Point
 * Description: Program to print three digits combination without repitition
 *
 * Return: Always the value of 0 (success)
 */
int main(void)
{
	int j;

	for (j = 0; j < 8; j++)
	{
		int jj;

		for (jj = j + 1; jj < 9; jj++)
		{
			int jjj;

			for (jjj = jj + 1; jjj < 10; jjj++)
			{
				putchar((j % 10) + '0');
				putchar((jj % 10) + '0');
				putchar((jjj % 10) + '0');

				if (j != 7)
				{
					putchar(',');
					putchar(' ');
				}
				else
					continue;
			}
		}
	}

	putchar('\n');

	return (0);
}
