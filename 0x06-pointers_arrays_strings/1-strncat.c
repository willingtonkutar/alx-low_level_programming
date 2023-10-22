#include "main.h"
/**
 * _strncat - concentarates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 * @n: number of bytes
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int m;

	for (m = 0 ; m < n && *src != '\0' ; m++)
	{
		dest[len + m] = *src;
		src++;
	}
	dest[len + m] = '\0';
	return (dest);
}
