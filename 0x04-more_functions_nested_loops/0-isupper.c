#include "main.h"

/**
 * _isupper - a function that prints upper case letter
 * @c: tha character inputed
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
