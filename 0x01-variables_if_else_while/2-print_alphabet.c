#include <stdlib.h>
#include <stdio.h>

/**
 * main - printing english alphabets
 *
 * Description: Using the putchar function to print the english alphabets
 * Return: 0
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)

	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
