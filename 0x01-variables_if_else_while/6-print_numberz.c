#include <stdlib.h>
#include <stdio.h>

/**
 * main - printing numbers using putchar
 *
 * Description: printing single digit numbers using putchar function
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
