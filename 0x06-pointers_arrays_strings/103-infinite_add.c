#include "main.h"

/**
 * infinite_add - Function to add two numbers
 * @n1: First number
 * @n2: Second number
 * @r: buffer
 * @size_r: buffer size
 *
 * Return: Always the buffer r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum = 0, m, n, o, big, i = 0, j = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i >= j)
		big = i;
	else
		big = j;
	if (size_r <= big + 1)
		return (0);
	r[big + 1] = '\0';
	i--, j--, size_r--;
	m = n1[i] - 48, n = n2[j] - 48;
	while (big >= 0)
	{
		o = m + n + sum;
		if (o >= 10)
			sum = o / 10;
		else
			sum = 0;
		if (o > 0)
			r[big] = (o % 10) + 48;
		else
			r[big] = '0';
		if (i > 0)
			i--, m = n1[i] - 48;
		else
			m = 0;
		if (j > 0)
			j--, n = n2[j] - 48;
		else
			n = 0;
		size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
