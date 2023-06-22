#include "main.h"

/**
 * _isupper- > is a  function to check if the character is  uppercase
 *
 * @c :c is an integer number
 *
 * Return:
 * -> 1 if c is uppercase
 * -> 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
