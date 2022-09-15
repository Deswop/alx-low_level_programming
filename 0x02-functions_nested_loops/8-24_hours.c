#include "main.h"

/**
 * jack_bauer - Write a function that prints every minute of the day of
 * Jack Bauer
 * starting from 00:00 to 23:59
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int min = 0;
	int hrem;
	int minrem;

	while (hours <= 23)
	{
		while (min <= 59)
		{
av
	hrem = hours % 10;
        _putchar(hours / 10 + '0');
	_putchar(hrem + '0');
	_putchar(':');
	_putchar(min / 10 + '0');
	_putchar(minrem + '0');
	min++;
	_putchar('\n');
		}
	hours++;
	min = 0;
	}
}
		
