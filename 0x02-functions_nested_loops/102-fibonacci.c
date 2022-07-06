#include <stdio.h>

/**
 * main - Entry Point
 * Description: fibonaccil numbers
 *
 * Return: always 0
 */

int main(void)
{
	long int n = 1, n1 = 2, n3, i;

	for (i = 1; i <= 50; ++i)
	{
		if (n != 20365011074)
		{
			printf("%ld, ", n);
		} else
		{
			printf("%ld\n", n);
		}
		n3 = n + n1;
		n = n1;
		n1 = n3;
	}

	return (0);
}
