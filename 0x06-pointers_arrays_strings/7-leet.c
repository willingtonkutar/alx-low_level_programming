#include "main.h"

/**
 *leet - encode string using th eletter encoding
 *@s: strin tha is used  to be encoded
 *Return: encoded string
 *
 */

char *leet(char *s)
{
	int i, j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0 ; s[i] != '\0' ; i++)
	{

		for (j = 0 ; j < 10 ; j++)
		{
			if (s[i] == a[j])
				s[i] = b[j];
		}
	}
	return (s);
}
