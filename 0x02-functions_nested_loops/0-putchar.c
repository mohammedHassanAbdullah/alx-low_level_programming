#include "main.h"

/**
 * main - Entry point
 * 0-putchar.c
 * Return: Always 0 (Success)
 */
int main(void)
{
	char p[] = "_putchar";
	int x;

	for (x = 0; x <= 7; x++)
	{
		_putchar(p[x]);
	}
	-putchar('\n');
	return (0);
}
