#include <stdio.h>

/**
 * main - Entry Point
 * Description: Program to print lowercase and uppercase alphabets
 *
 * Return: Always the value 0 (success)
 */

int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (C = 'A'; C <= 'Z'; ++C)
		putchar(C);

	putchar('\n');

	return (0);
}
