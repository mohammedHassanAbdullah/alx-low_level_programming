#include "main.h"

/**
 * print_alphabet ->
 * A function that prints the alphabet in lower case
 * A function that prints the alphabet, in lowercase, followed by a new line.
 * Retruns: void (no return)
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
