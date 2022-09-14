#include "main.h"

/**
 * main - printing alphabets abc
 *
 * Description: printing alphabets using print alphabet function
 * Return: 0
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

