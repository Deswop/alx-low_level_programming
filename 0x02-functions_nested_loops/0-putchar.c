#include "main.h"

/**
 * main - printing followed by a new line
 *
 * Description: Writing a program that prints _putchar followed by a new line
 * Return: 0
 */
int main(void)
{
	char newline;

	while (newline)
	{
		_putchar(newline);
		newline++;
	}
	_putchar('\n');

	return (0);
}
