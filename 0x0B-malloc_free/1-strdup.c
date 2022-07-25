#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that return a pointer to a newly allocated
 * space in memory, which contains a copy of the string in the
 * parameter.
 * @str: string.
 *
 * Return: pointer to allocated space.
 */

char *_strdup(char *str)
{
	char *dup;
	int count = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	dup = malloc((count * sizeof(char)) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}
	else if (dup == malloc(0))
	{
		return (NULL);
	}
	i = 0;
	while (i < count)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
