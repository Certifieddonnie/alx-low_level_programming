#include "main.h"

/**
 * _strstr - Function that locates a substring in a string
 * @haystack: String
 * @needle: substring
 *
 * Return: Always haystack.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (needle[i] != '\0')
	{
		int y = 0;

		while (haystack[y] != '\0')
		{
			if (haystack[y] == needle[i])
			{
				return (haystack + y);
				/*Comparison Segment */
				/*Printing segment of the result */
			}
			y++;
		}
		i++;
	}
	return (0);
}
