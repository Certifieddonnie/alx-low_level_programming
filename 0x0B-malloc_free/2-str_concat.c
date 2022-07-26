#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Function to return length of string.
 * @s: string
 *
 * Return: the length.
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - Function that concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: NULL or cat.
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);

	cat = malloc(size * sizeof(char));

	if (cat == 0)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		cat[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		cat[i] = s2[j];
		i++;
	}
	return (cat);
}
