#include "main.h"

/**
 * _realloc - reallocates memory using malloc and free
 * @ptr: pointer to the memory allocated with malloc
 * @old_size: the size, in bytes
 * @new_size: the new size, in bytes
 * Return: a pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
	new_size = old_size;

	for (i = 0 ; i < new_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];

	free(ptr);
	return (new_ptr);
}
