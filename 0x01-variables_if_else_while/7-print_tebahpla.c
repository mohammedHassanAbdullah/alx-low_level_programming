#include <stdio.h>

/**
 * main - Entry point
 * revese orader
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
