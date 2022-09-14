#include "main.h"

/**
 * main - a program that checks for lower case
 * @c: a character inputed
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
