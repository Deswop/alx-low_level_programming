#include <stdlib.h>
#include <stdio.h>

/**
 * main - combo  of two two digit number
 *
 * Description: printing possible combination of two two digit numbers
 * Return: 0
 */
int main(void)
{
	int num;
	int num2;

	for (num = 0; num <= 98; num++)
	{
		for (num2 = num + 1; num2 <= 99; num2++)
		{
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num == 98 && num2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
