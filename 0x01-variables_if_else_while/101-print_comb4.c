#include <stdlib.h>
#include <stdio.h>

/**
 * main - printing three digits combo
 *
 * Description: printing all possible combination for three digits without
 * repitition
 * Return: 0
 */
int main(void)
{
	int num;
	int num2;
	int num3;

	for (num = 0; num < 8; num++)
	{
		for (num2 = num + 1; num2 < 9; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				putchar((num % 10) + '0');
				putchar((num2 % 10) + '0');
				putchar((num3 % 10) + '0');

				if (num == 7 && num2 == 8 && num3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
