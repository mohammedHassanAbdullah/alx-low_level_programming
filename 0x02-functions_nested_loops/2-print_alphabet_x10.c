#include "main.h"

/**
 * print_alphabet_x10 ->
 * A function that prints the alphabet in lower case 10 times
 *
 * Retruns: void (no return)
 */
void print_alphabet_x10(void)
{
	int alpha, x;

	for (x = 1; x <= 10; x++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
