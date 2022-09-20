#include "main.h"

/**
 *_strlen - returns the length of a string
 * @*s: the string
 * return: returns the length as an integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
