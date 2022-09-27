#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: memory area to be copied to
 * @src: memoryarea to be copied from
 * @n: number of bytees to be copied
 *
 * Return: pointeer to the copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
