#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * Description: Program that adds positive numbers.
 * @argc: Argument count
 * @argv: Arguments
 *
 * Return: Alwyas 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
