#include "main.h"
#include <stdio.h>
/**
 * print numbers - a function that prints from 0 to 9
 * @n: the number
 * Return: 0
 */

void print_numbers(void)
{
	int n;
	
	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
