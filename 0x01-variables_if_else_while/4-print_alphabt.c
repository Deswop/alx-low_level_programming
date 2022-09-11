#include <stdlib.h>
#include <stdio.h>

/**
 * main - printing with exclution
 *
 * Description: printing thbe english alphabets excluding e and q
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if(ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
