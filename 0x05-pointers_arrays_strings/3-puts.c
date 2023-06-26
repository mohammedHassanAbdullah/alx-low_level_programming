#include "main.h"

/**
 * _puts-> a function to a string, followed by a new line
 *
 * @str: str is a pointer to string prameter
 *
 * Return: void (no return)
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != 0; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
