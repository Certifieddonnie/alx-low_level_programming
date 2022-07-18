#include "main.h"

/**
 * _strchr - Function to search s and look for c
 * @s: String to searched
 * @c: Character to search
 *
 * Return: Always s.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s == '\0')
		{
			return (s);
		}
		s++;
	}
	return (s);
}
