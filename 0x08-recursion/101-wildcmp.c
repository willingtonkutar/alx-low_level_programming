#include "main.h"

/**
 *wildcmp - Compares two strings with possible wildcards.
 *@s1: The first string
 *@s2: The second string (may contain wildcards)
 *Return: 1 or 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0' || (*s2 == '*' && wildcmp(s1, s2 + 1)))
			return (1);
	}

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
		return (wildcmp(s1, s2 + 1));
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
