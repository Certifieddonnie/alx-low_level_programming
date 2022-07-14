#include "main.h"

/**
 * cap_string - Function to capitalize the first letter of every word.
 * @s: string
 *
 * Return: always the result s.
 */

char *cap_string(char *s)
{
	int i = 0;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int j;
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}
	i++;

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
				break;
			}
		}
	}

	return (s);
}
