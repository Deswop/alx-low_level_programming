#include <stdio.h>
#include "main.h"

/**
 * print_line - a function that prints a straight line
 * @n: the parameter
 * Return: nothing
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
