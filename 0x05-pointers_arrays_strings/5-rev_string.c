#include"main.h"

/**
 * rev_string - Function to print reversed string
 * @s: String Parameter
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int y;
	char a[256];

	for (y = 0; s[y] != '\0'; y++)
	{
		a[y] = s[y];
	}
	y--;

	for (; y >= 0; y--)
	{
		s[y] = a[i];
		i++;
	}
	s[i++] = '\0';
}
