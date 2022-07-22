#include <stdio.h>

/**
 * main - Entry Point
 * Description: Program to print all arguments it receives
 * @argc: Argument Count
 * @argv: Arguments strings
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
