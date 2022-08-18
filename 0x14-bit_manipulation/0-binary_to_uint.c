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
	int sum = 0, i, y, len = 0;

	if (b == NULL)
		return (sum);
	for (i = 0; b[i] != '\0'; i++)
		len++;
	i = 0, y = len - 1;
	while (i < len)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0') * _pow(2, y);
		i++;
		y--;
	}
	return (sum);
}

/**
 * _pow - Function for exponentials
 * @base: Number
 * @exp: power number
 * Return: value of result.
 */
int _pow(int base, int exp)
{
	int i, num;

	num = 1;
	for (i = 0; i < exp; i++)
		num *= base;

	return (num);
}
