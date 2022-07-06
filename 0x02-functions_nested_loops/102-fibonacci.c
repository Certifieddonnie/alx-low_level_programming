#include <stdio.h>

/**
 * main - Entry Point
 * Description: fibonaccil numbers
 *
 * Return: always 0
 */

int main(void)
{
	int n = 0, n1 = 1, n3, i;

	printf("\n%d %d", n, n1);
	for (i = 2; i < 50; ++i)
	{
		n3 = n + n1;
		printf(" %d", n3);
		n = n;
		n1 = n1;
	}

	return (0);
}
