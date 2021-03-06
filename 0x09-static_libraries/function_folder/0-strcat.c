#include "holberton.h"

/**
 * _strcat - String concatenation
 * @dest: Destination
 * @src: Source
 * Return: Character
 */

char *_strcat(char *dest, char *src)
{
	int destlen;
	int x;

	for (destlen = 0; dest[destlen] != 0; destlen++)
	{
		continue;
	}

	for (x = 0; src[x] != 0; x++)
	{
		dest[destlen] = src[x];
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
