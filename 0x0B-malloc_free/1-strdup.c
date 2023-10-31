#include "main.h"

/**
 *_strdup - copies the string
 *@str: string used for copying
 *Return: pointer to new memory
 *
 *
 */

char *_strdup(char *str)
{
	int i;
	char *copy;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
		copy[i] = str[i];

	return (copy);
}
