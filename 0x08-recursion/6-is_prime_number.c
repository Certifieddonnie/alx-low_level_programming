#include "main.h"

/**
 * scout - Function checks prime number
 * @n: number
 * @m: half of n
 *
 * Return: 1 or 0
 */

int scout(int n, int m)
{
	if (m == 1)
	{
		return (1);
	}
	else
	{
		if ((n % m) == 0)
			return (0);
		else
			return (scout(n, m - 1));
	}
}

/**
 * is_prime_number - Function that return 1 if n is prime number else returns 0
 * @n: number
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (scout(n, n / 2));
	}
}
