#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: is the int that willbe used for the arg of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <='z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
