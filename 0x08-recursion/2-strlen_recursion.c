#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to a string
 * Return: Length of a string - an integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
