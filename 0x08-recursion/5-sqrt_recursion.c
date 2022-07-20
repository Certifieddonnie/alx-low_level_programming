#include "main.h"

/**
 * checker - Function to prove the square root of n
 * @n: number
 * @i: square root
 *
 * Return: square root of number.
 */

int checker(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else if ((n > 0) && (i < (n / 2)))
		return (checker(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: number
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (checker(n, 1));
}
