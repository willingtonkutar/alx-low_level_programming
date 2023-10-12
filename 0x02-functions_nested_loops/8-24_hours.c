#include "main.h"

/**
 *jack_bauer - function used
 *Return: void
 *
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0 ; i < 24 ; i++)
	{
		for (j = 0 ; j < 60 ; i++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar('i');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
	}
}
