#include <stdio.h>

/**
 * main - Entry point
 * Alpha bit
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'q' || alpha == 'e')
			continue;
		else
			putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
