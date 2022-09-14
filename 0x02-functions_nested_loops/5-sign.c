#include "main.h"

/**
 * main - function that prints the sign of a number
 *
 * Description: returns 1,0 and  -1
 * @n: is the int that is used for the argument of the function
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}
	else
	{
		_putchar('0');

		return (0);

	}
}
