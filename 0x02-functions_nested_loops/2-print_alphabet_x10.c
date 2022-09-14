#include "main.h"

/**
 * main - use putchar to ptint
 *
 * Description: printing te times an alphabet
 * Return: 0
 */
void print_alphabet_x10(void);
{
	char i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}

		putchar(i);
	}
	putchar('\n');
}
