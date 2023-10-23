#include "main.h"

/**
 * _memset - Fills the first n
 * @s: Pointer to memory area.
 * @b: Constant byte.
 * @n: Number of bytes.
 *Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	s[i] = b;

	return (s);
}
