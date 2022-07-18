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

		while (haystack[y] != '\0' && haystack[y] == needle[i])
		{
			i++;
			y++;
		}
		if (!needle[i])
		{
			return (haystack);
		}
		haystack++;
		
	}
	return (0);
}
