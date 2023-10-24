#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: Pointer to main string
 * @needle: Pointer to the substring
 * Return: Pointer to the beginning
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

	while (*n != '\0' && *h == *n)
	{
		h++;
		n++;
	}

	if (*n == '\0')
		return (haystack);

	haystack++;
	}
	return (0);
}
