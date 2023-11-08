#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory to be allocated
 * Return: a pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
