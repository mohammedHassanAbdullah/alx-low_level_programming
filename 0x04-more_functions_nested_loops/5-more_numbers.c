#include "main.h"

/**
 * more_numbers -> a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: void (no return)
 */

void more_numbers(void)
{
	char i, j;

	for (i = '1'; i <= '10'; i++)
	{
		for (j = '0'; j <= '14'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
