#include <stdio.h>

/**
 * main - Entry Point
 * Description: Program to prints the nnumber of arguments passed
 * into it.
 * @argc: Arguments Count.
 * @argv: Arguments Strings.
 *
 * Return: Always 0;
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
