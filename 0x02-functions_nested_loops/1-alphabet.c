#include "main.h"

/**
 * main - printing alphabets
 *
 * Description: a function that checks for lower case using int _islower(int c)
 * Return: Always 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
