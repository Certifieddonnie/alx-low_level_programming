#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x exponential y
 * @x: base number
 * @y: exponential
 *
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
