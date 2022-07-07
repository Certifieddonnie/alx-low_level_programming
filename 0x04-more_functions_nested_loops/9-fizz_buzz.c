#include <stdio.h>

/**
 * main - Entry Point
 * Description: A function to print FIZZBUZZ for multiples of
 * 3 and 5, while 3 is FIZZ and 5 is BUZZ.
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%i ", i);
		}
	}
	printf("\n");
	return (0);
}
