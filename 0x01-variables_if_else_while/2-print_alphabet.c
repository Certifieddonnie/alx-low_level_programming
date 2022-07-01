#include <stdio.h>

/**
 * main - Entry Point
 * Description: Program to print alphabets in lowercase
 *
 * Return: Always the value 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);

	putchar('\n');
	return (0);
}
