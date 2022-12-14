#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the number is positive, negative or zero
 *
 * Description: The variable n will store a different value every time you will
 * run this program
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}

