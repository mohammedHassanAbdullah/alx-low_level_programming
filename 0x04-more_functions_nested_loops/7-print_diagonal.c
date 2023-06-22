#include "main.h"

/**
 * print_diagonal -> a function that draws a diagonal line on the terminal.
 *
 * @n: n is an integer argument
 *
 * Return: void (no return)
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; i++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
