#include <stdio.h>

/**
 * main - Entry point
 * Alpha bit
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
			continue;
		else
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
