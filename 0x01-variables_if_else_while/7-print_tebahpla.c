#include <stdlib.h>
#include <stdio.h>

/**
 * main - printing alpha in reverse
 *
 * Description: printing all alphabets in erverse order
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
