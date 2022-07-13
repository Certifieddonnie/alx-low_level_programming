#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Program to create random valid passwords for the program 101-crackme
 * Description: Valid passwords
 *
 * Return: Always the result
 */

int main(void)
{
	int i = 0;

	int rands = 0;

	srand((unsigned int)(time(NULL)));

	char numbers[] = "0123456789";

	char letters[] = "abcdefghijklmnopqrstuvwxyz";

	char symbols[] = "!@#$^&?*";

	char LETTERS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char password[100];

	rands = rand() % 4;

	for (i = 0; i <= 10; i++)
	{
		if (rands == 1)
		{
			password[i] = numbers[rand() % 10];
			rands = rand() % 4;
		}
		else if (rands == 2)
		{
			password[i] = symbols[rand() % 8];
			rands = rand() % 4;
		}
		else if (rands == 3)
		{
			password[i] = letters[rand() % 26];
			rands = rand() % 4;
		}
		else
		{
			password[i] = LETTERS[rand() % 26];
			rands = rand() % 4;
		}
	}
	password[i++] = '\0';
	printf("%s\n", password);

	return (0);
}
