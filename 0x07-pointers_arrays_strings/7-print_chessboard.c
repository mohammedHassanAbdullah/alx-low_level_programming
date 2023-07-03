#include "main.h"

/**
 * print_chessboard -> a function that prints the chessboard.
 *
 * @a: a is a 2D character array
 *
 * Return: void (no return)
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
