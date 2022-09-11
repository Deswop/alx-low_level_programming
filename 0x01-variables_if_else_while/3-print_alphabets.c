#include <stdlib.h>
#include <stdio.h>

/**
 * main - printing alphabets
 *
 * Description: Printing alphabets in lower case then upper case
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
