#include <stdio.h>

/**
 * main - Entry Point
 * Description: Program to print alphabets without e and q
 *
 * Return: Always the value 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');

	return (0);
}
