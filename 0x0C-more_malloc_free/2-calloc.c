#include "main.h"

/**
 * _calloc - allocates memory for an array and initializes to 0
 * @nmemb: number of elements in an array
 * @size: size of each single element in bytes
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
