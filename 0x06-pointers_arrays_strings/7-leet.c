#include "main.h"

/**
 * leet - Function that encodes a string into leet
 * @s: String
 *
 * Return: the result s.
 */

char *leet(char *s)
{
	int i;
	int j;
	int w[] = {'a', 'e', 'o', 't', 'l'};
	int W[] = {'A', 'E', 'O', 'T', 'L'};
	int rep[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == w[j] || s[i] == W[j])
			{
				s[i] = rep[j];
				break;
			}
		}
	}
	return (s);
}
