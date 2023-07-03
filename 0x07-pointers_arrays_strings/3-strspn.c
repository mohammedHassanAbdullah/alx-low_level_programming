#include "main.h"

/**
 * _strspn -> a function that gets the length of a prefix substring.
 *
 * @s: s is a pointer to char parameter.
 * @accept: accept is a pointer to char parameter.
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (count != i + 1)
			break;
	}
	return (count);
}
