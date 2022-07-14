#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Always the value.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int value = 0;

	for (i = 0; value == 0; i++)
	{
		if (s1[i] > s2[i])
		{
			value = s1[i] - s2[i];
		}

		else if (s1[i] < s2[i])
		{
			value = s1[i] - s2[i];
		}
		else
			return (value);
	}

	return (value);
}
