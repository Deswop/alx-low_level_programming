#include "main.h"

/**
 * print_last_digit - function to print last digit
 * @n: is the int that will be used for the arg of the function
 * Return: 0
 */
int print_last_digit(int n)
{
	int c = n % 10;

	if ( c < 0)
		c * -1;

	_putchar(c + '0');

	return (c);
}
