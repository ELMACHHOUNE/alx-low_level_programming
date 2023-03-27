#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

