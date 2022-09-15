#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - print n to 98
 * @n: is the input of the user
 * Return: 0
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n--);
			printf("%d\n", n);
		}
		else
		{
			printf("%d, ", n++);
			printf("%d\n", n);
		}
	}
}
