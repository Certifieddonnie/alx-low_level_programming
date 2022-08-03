#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * Description: program that prints the opcodes of its own main function
 * @argc: argument counts
 * @argv: argument variables
 *
 * Return: success
 */

int main(int argc, char *argv[])
{
	int number_of_bytes, i;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	i = 0;
	while (i < number_of_bytes)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == number_of_bytes - 1)
			continue;
		printf(" ");

		address++;
	}
	printf("\n");
	return (0);
}
