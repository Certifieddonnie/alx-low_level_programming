#include <stdio.h>

/**
 * main - printf sum of multiply numbers 3 and 5
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long in a, b, c;
	int i;

	a = 0;
	b = 0;
	c = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			a = a + 1;
		} else if ((i % 5) == 0)
		{
			b = b + 1;
		}
	}
	c = a + b;
	printf("%lu\n", c);
	return (0);
}
