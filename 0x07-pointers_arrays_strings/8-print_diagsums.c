#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of two diagonals of a square matrix
 * @a: pointer to size of matrix
 * @size: width of matrix column
 */

void print_diagsums(int *a, int size)
{
	int i, j, p, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - l -j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}
