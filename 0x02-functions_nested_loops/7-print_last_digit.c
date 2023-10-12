#include "main.h"

/**
 *print_last_digit - function used to print thelast digit
 *@i: parameter used
 *Return: m
 */

int print_last_digit(int i)
{
	int m;

	m = i % 10;
	if (i < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}
