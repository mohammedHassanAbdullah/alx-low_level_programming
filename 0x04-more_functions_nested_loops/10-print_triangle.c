#include "main.h"

/**
 * print_triangle -> a function that prints a triangle
 *
 * @size: size is an integer argument
 *
 * Return: void (no return)
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if ((i + j) < siz)
				{
					_putchar(' ');
				}
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
