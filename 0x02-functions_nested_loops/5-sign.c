#include "main.h"

/**
 * print_sign - funcrion that prints the sign of a number
 * @n: is the number that will be inputed
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}
	else
		return (0);
}
