#include "main.h"

/**
 * _puts_recursion - Prints a string and a new line.
 * @s: Pointer to string
 *Return: void (0)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
