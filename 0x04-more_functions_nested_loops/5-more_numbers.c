#include "main.h"
#include <stdio.h>

/**
 * more_numbers - a function that prints 0 - 14
 *
 * Return: nothing
 */
void more_numbers(void);
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				putchar((b / 10) + '0');
			}
			putchar((b % 10) + '0');
		}
		putchar(10);
	}
}
