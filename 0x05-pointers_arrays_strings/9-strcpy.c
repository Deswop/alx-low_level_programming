#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy paste string
 * @dest: deestination
 * @src: source
 *
 * Return: Destination
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
