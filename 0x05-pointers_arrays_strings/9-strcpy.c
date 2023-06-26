#include "main.h"

/**
 * _strcpy-> a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @dest: dest is a pointer to string parameter
 * @src: src is a pointer to string parameter
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, count = 0;

	for (i = 0; *(src + i) != 0; i++)
		count++;
	for (i = 0; i < count; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
	return (dest);
}
