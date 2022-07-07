#include <stdio.h>

/**
 * main - Entry Point
 * Description: Program to print the largest prime factor of the num
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long int count = 3;
	unsigned long int n = 612852475143;

	for (; count < 12057; count += 2)
	{
		while (n % count == 0 && n != count)
			n /= count;
	}
	printf("%lu\n", n);
	return (0);
}
