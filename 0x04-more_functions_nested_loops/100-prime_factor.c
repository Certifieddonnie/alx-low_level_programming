#include <stdio.h>

/**
 * main - Entry Point
 * Description: Program to print the largest prime factor of the num
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long long int num = 612852475143L;
	int count = 2;

	if (num % count == 0)
	{
		for (count = count; num > 1; count++)
		{
			while (num % count == 0)
			{
				num = num / count;
			}
		}
		printf("%d\n", count - 1);
	}
	else
	{
		printf("%lld\n", num);
	}
	return (0);
}
