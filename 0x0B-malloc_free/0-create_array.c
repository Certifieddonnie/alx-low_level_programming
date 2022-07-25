#include <stdlib.h>
#include "main.h"

/**
 * create_array - Function that creates an array of chars and
 * initialize it with a specific char.
 * @size: size of array
 * @c: character to initialize with.
 *
 * Return: pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
