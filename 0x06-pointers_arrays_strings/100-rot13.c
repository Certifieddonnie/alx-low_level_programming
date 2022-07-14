#include "main.h"

/**
 * rot13 - Function that encodes string using rot13
 * @s: string.
 *
 * Return: Always the result s.
 */

char *rot13(char *s)
{
	int i;
	int j;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alphabets[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}

	return (s);
}
