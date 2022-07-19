#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard
 * @a: array of 8 elementa
 *
 * Return: the result
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;

	while (i < 8)
	{
		int y = 0;

		while (y < 8)
		{
			_putchar (a[i][y]);
			y++;
		}
		_putchar ('\n');
		i++;
	}
}
