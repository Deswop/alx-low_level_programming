#include " main.h"

/**
 * _strncat: C function that copies a string
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: integer paarmeter to compare index to
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && indx < n;index++)
		dest[dest_len++]  = src[index];

	return (dest);
}
