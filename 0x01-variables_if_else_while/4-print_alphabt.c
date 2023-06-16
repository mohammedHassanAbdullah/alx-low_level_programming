#include <stdio.h>

/**
 * main - Entry point
 * Alpha bit
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z' && alpha != 'q' && alpha != 'e')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
