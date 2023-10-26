#include "main.h"

/**
 *_strpbrk - function used
 *@s: parameter 1
 *@accept: parameter 2
 *Return: 0
 *
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (0);
}
