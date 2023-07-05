#include "main.h"

/**
 * factorial-> a function that returns the factorial of a given number
 *
 * @n: n is a int argument
 *
 * Return: int
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
