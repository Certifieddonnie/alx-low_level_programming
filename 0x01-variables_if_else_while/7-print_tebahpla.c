#include <stdio.h>

/**
 * main - Entry POINT
 * Description: Program to print mirrored alphabets
 *
 * Return: Always the value 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
		printf("%c", c);

	putchar('\n');
	return (0);
}
