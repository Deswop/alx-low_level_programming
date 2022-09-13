#include <stdlib.h>
#include <stdio.h>

/**
 * main - printing possible combination of two digits
 *
 * Description: writing a c program that prints possible combination of two
 * digits number in ascending order
 * Return: 0
 */
int main(void)
{
	int num;
	int num2;

	for (num = 0; num < 10; num++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			putchar((num % 10) + '0');
				putchar((num2 % 10) + '0');
		

		if (num = 9 && num2 = 9)
			continue;

		putchar(',');
		putchar(' ');
		}
	}
	
	putchar('\n');

	return (0);
}
