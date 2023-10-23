#include "main.h"

/**
 * _memcpy - Copies n bytes.
 * @dest: Pointer.
 * @src: Pointer.
 * @n: Number of bytes.
 *
 * Return: Pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];

	return (dest);
}
