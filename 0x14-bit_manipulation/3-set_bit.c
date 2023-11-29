#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number in which the bit is to be set.
 * @index: The index of the bit to be set, starting from 0.
 * Return: 1 if it worked, or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n = *n | (1UL << index);

	return (1);
}
