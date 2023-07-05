#include "main.h"

/**
 * _strlen_recursion-> a function that returns the length of a string
 *
 * @s: s is a pointer to char parameter
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (s[0] == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
