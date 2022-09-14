#include "main.h"

/**
 * main - function that checks for some stuffs
 *
 * Description: the code checks for letter, lower case and upper case
 * Return:0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
