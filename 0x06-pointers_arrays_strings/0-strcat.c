#include <stdio.h>
#include "main.h"

/**
 * _strcat - a function that concatenates two srings
 * @dest: destination
 * @src: source
 * @n: integer parameter to compare index to
 * Return: returns new concatenaeted string
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

