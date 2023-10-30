#include "main.h"

/**
 * _strlen - function used
 * @s: poimter of the value to be chamged
 * Return: length of the sting
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
