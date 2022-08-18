#include "main.h"

int _pow(int base, int exp);

/**
 * binary_to_uint - Function that converts a binary number to an
 * unsigned int.
 * @b: pointer to string of 0 and 1 char
 * Return: coverted number
 */

unsigned int binary_to_uint(const char *b)
{
	int sum = 0, i;

	if (b == NULL)
		return (sum);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum = (sum * 2) + 1;
		else
			sum = (sum * 2) + 0;
		i++;
	}
	return (sum);
}
