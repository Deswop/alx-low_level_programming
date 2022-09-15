#include "main.h"

/**
 * _abs - function that computes the absolute value
 * @n: the int that is used for the arg of the function
 * Return: 0
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
		return  (n * -1);
}
