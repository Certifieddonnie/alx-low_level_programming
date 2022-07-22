#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * Description: Program that multiplies that two numbers
 * @argc: Arguments Count
 * @argv: Argument Srings
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
