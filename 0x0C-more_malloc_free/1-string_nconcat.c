
#include "main.h"
/**
 * string_nconcat - concatenates two strings with first n bytes of the s2 used
 * @s1: The first string used
 * @s2: The second string used
 * @n: The maximum number of bytes that concatenate from s2
 * Return: A pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	concat = malloc(len1 + n + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (i = 0; i < n; i++)
		concat[len1 + i] = s2[i];
	concat[len1 + n] = '\0';

	return (concat);
}
